//Daniel Farone
//CSCI 3110-001
//Project #6
//Due: 04/14/22
//This file instantiates a PriorityQueue object which substitutes the template with a Rectangle object
//and a Comparator for Rectangle objects as LesserOne or GreaterOne depending if it is a max or min heap.
//Reads 'maxq-rectangles.txt' and enqueues each rectangle and its dimensions into the max heap, displays the heap,
//then dequeues each element in the max heap until it is empty. The program uses private functions to heapify during this.
//This process is repeated for 'minq-rectangles.txt' except it is executed as a min heap instead of a max heap like above.
#include "priorityqueue.h"
#include "rectangle.h"
#include <fstream>

int main()
{
  //Max Priority Queue
  std::ifstream infile1;
  infile1.open("maxq-rectangles.txt");
  int rect1_length, rect1_width;
  PriorityQueue<Rectangle, LesserOne<Rectangle>> maxq;
  //Enqueues and displays the queue after heapifying
  while(infile1 >> rect1_length >> rect1_width)
  {
    Rectangle box1{rect1_length, rect1_width};
    maxq.enqueue(box1);
    maxq.print();
    std::cout << std::endl;
  }
  std::cout << std::endl;
  //Dequeues the elements in the heap and heapifies until empty
  while(maxq.empty() == false)
  {
    maxq.dequeue();
    maxq.print();
    std::cout << std::endl;
  }
  std::cout << "Max Queue Empty" <<std::endl; 
  
  std::cout << std::endl;
  std::cout << std::endl;   
  
  //Min Priority Queue
  std::ifstream infile2;
  infile2.open("minq-rectangles.txt");
  int rect2_length, rect2_width;
  PriorityQueue<Rectangle, GreaterOne<Rectangle>> minq;
  //Enqueues and displays the queue after heapifying
  while(infile2 >> rect2_length >> rect2_width)
  {
    Rectangle box2{rect2_length, rect2_width};
    minq.enqueue(box2);
    minq.print();
    std::cout << std::endl;
  }
  std::cout << std::endl;
  //Dequeues the elements in the heap and heapifies until empty
  while(minq.empty() == false)
  {
    minq.dequeue();
    minq.print();
    std::cout << std::endl;
  }
  std::cout << "Min Queue Empty" <<std::endl; 
  
  return 0;
}