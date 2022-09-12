//Daniel Farone
//CSCI 3110-001
//Project #6
//Due: 04/14/22
//This serves as the header file for the PriorityQueue, LesserOne, and GreaterOne class templates
//All 3 class templates are fully implemented in this file
#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H
#include <iostream>
#include <vector>

//This class represents a priority queue implemented using a binary heap
//Parameters "type" of element and an instance of a Comparator class
template<typename T, typename Comparator>
class PriorityQueue
{
  private:
    int sz = -1; //actual size of entries in the vector
    std::vector<T> vec; //holds the heap 
    Comparator comp; //instantiates a comparator to compare the different types from template
    
    //Void function that takes current index of the heap and restores heap order after enqueing
    void heapUp(int index)
    {
      while(index > 0 && comp.compareTypes(vec[(index - 1) / 2], vec[index]))
      {
        std::swap(vec[(index - 1) / 2], vec[index]);
        index = (index - 1) / 2;
      }
    }
    
    //Void function that takes current index of the heap and restores heap order after dequeuing
    void heapDown(int index)
    {
      int lchild = (2 * index) + 1;
      int rchild = (2 * index) + 2;
      int cur = index;
      
      if(lchild <= sz && comp.compareTypes(vec[cur], vec[lchild]))
        cur = lchild;
      if(rchild <= sz && comp.compareTypes(vec[cur], vec[rchild]))
        cur = rchild;
      if(index != cur) //does this until traversing counter matches the index passed to the function
      {
        std::swap(vec[index], vec[cur]);
        heapDown(cur);
      }
    }
    
  public:
    //Resizes the vector representing the heap to a maximum of 50 elelments
    PriorityQueue()
    {
      vec.resize(50);
    }  
    
    //Void function that sets the highest priority element in the heap to the last entered element
    //Decrements the size variable of the heap and calls heapDown() with index 0
    void dequeue()
    {
      std::cout << "Dequeued " << vec[0] << " ";
      vec[0] = vec[sz];
      sz -= 1;
      heapDown(0);
    }
    
    //Void function that takes the element read from the input file as an argument
    //Increases the size variable of the heap and adds the passed element to the end of the heap
    //Then calls heapUp() with that last element in the heap
    void enqueue(T item)
    {
      sz += 1;
      vec[sz] = item;
      std::cout << "Enqueued " << vec[sz] << " ";
      heapUp(sz);
    }
    
    //A bool function that says whether the heap is empty or not after size reaches a certain value
    bool empty()
    {
      if(sz == -1)
        return true;
      else
        return false;
    }
    
    //Prints every element in the heap
    void print()
    {
    for(int i = 0; i <= sz; i++)
      std::cout << "  " << vec[i];
    }
};

//A class template to create a custom comparator to compare if a element of Type T1 <= another element of Type T2
template <typename T1>
class LesserOne
{
  public:
    bool compareTypes(const T1 &lhs, const T1 &rhs) const
    {
      return lhs <= rhs;
    }
};

//A class template to create a custom comparator to compare if a element of Type T1 >= another element of Type T2
template <typename T2>
class GreaterOne
{
  public:
    bool compareTypes(const T2 &lhs, const T2 &rhs) const
    {
      return lhs >= rhs;
    }
  
}; 

#endif