/** \example list_queue/sample_list_queue3.cpp
 * This is an example of how to use the ListQueue class.
 */
// ListQueue::push/pop
#include <iostream>         // std::cin, std::cout
#include "ListQueue.hpp"   // ListQueue

int main ()
{
  ListQueue<int> myqueue;
  int myint;

  std::cout << "Please enter some integers (enter 0 to end):\n";

  do {
    std::cin >> myint;
    myqueue.push (myint);
  } while (myint);

  std::cout << "myqueue contains: ";
  while (!myqueue.isEmpty())
  {
    std::cout << ' ' << myqueue.front();
    myqueue.pop();
  }
  std::cout << '\n';

  return 0;
}
