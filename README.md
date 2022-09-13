# HeapPriorityQueue-C-

Description:

The program has a class template that is the implementation of a priority queue. The implementation is
based on building and maintaining heaps based on “highest priorities”, which may be minimum values or maximum
values, depending on the priority queue type. A single enqueue and a single dequeue function will each internally use a
custom comparator to add and remove items from both types of priority queues. The correct functioning of the priority
queues will be demonstrated by storing instances of the custom class. 

Specifications:

1. The program is split into 4 files. There is a class template (rectangle.h), a separate interface and implementation file
for a custom class (rectangle.cpp)(priorityqueue.h), and a driver file (priorityqueue.cpp). Specified below:

  a) The PriorityQueue class template– This class represents a priority queue implemented using a binary heap. It has
  two type parameters: 
  
    1) The type of the element stored in the heap (see custom class)
    2) A comparator class type.

     The class is named PriorityQueue
     The following member functions are implemented in the class:

      o A constructor – Resizes the vector representing the heap to hold 50 items. – Note: This (vector) size
      represents the maximum number of elements in the heap (in this case it is more of an allocated
      capacity value). A size variable that holds the actual number of elements in the heap at any one time, as part of your                   implementationis maintained.
      o dequeue (void) – Removes the highest priority item. Does not return it.
      o enqueue (void) – Takes one parameter: the item to be enqueued. Enqueues the item and places it in
      the proper heap order.
      o heapUp (private, void) – Takes an index parameter and heaps the item up based on its priority.
      o heapDown (private, void) – Takes an index parameter and heaps item down based on its priority.
      o empty (boolean) – Returns true if queue is empty, and false otherwise 
      o print (void) – Displays the items in the heap, from index 0 through number of elements minus 1.

     Comparators - There will be two class template comparators each of which takes a type parameter. One of
    the comparators is used to compare if an item is less than or equal to (<=) another item of the same type,
    and the other to compare if the item is greater than or equal to (>=) another item. Each of these classes will
    have a single, public, bool function that returns the result of the above comparisons for two objects of the
    same type. This function has the same name in both class templates. These classes will be used in
    the declaration of the priority queues (i.e., as type parameters), and will be defined in the file
    priorityqueue.h, outside of the PriorityQueue class template. 
  
  b) The custom class – This class is the Rectangle class that defines a rectangle objet (width, length, and area)
  
  c) A driver, or client, file that
  
     Named priorityqueue.cpp
     Reads data from two input files, named maxq-rectangles.txt and minq-rectangles.txt – All below processing
    for the max priority queue is carried out first, and after that the min queue file is read/processed.
    
      o Both files are formatted similarly. Each line has two elements:
    
     The first element of each line is an integer representing the length of the rectangle .
     The second element of the line (also an integer) is the width of the rectangle.
     A Rectangle with dimensions read is declared and enqueued in the priority queue.
      Note: This input file has an unspecified number of randomly shaped rectangles. The Null Rectangle or
      other invalid rectangles (such as those with negative dimensions) will not appear in the input file. All
      Rectangles in the file will have a distinct area (no rectangles in the file have the same area)
     After enqueuing the rectangles from the above file, elements in the priority queue are
    dequeued one at a time until the priority queue is empty (see sample output).
    Repeated enqueuing and dequeuing with contents of file minq-rectangles.txt

2. Sample output:
a) This output shows program execution with min and max heaps storing objects of the custom class. They are
based on the provided input files. 

![image](https://user-images.githubusercontent.com/97635420/189786870-5f9e3d18-fafd-47d0-83a2-def54a08ab4e.png)

