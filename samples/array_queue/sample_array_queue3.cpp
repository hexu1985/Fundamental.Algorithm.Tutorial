/** \example array_queue/sample_array_queue3.cpp
 * This is an example of how to use the ArrayQueue class.
 */
// ArrayQueue::push/pop
#include <iostream>         // std::cin, std::cout
#include "ArrayQueue.hpp"   // ArrayQueue

using namespace mini_algo;

int main ()
{
  ArrayQueue<int> myqueue(10);
  int myint;

  std::cout << "Please enter some integers (enter 0 to end):\n";

  do {
    std::cin >> myint;
    myqueue.push (myint);
  } while (myint && !myqueue.isFull());

  std::cout << "myqueue contains: ";
  while (!myqueue.isEmpty())
  {
    std::cout << ' ' << myqueue.front();
    myqueue.pop();
  }
  std::cout << '\n';

  return 0;
}
