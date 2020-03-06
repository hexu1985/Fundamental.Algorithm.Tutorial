/** \example queue/sample_queue2.cpp
 * This is an example of how to use the Queue class.
 */
// Queue::empty
#include <iostream>         // std::cout
#include "Queue.hpp"   // Queue

using namespace mini_algo;

int main ()
{
  Queue<int> myqueue;
  int sum (0);

  for (int i=1;i<=10;i++) myqueue.push(i);

  while (!myqueue.isEmpty())
  {
     sum += myqueue.front();
     myqueue.pop();
  }

  std::cout << "total: " << sum << '\n';

  return 0;
}
