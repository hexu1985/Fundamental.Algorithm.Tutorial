/** \example queue/sample_queue5.cpp
 * This is an example of how to use the Queue class.
 */
// Queue::size
#include <iostream>         // std::cout
#include "Queue.hpp"   // Queue

using namespace mini_algo;

int main ()
{
  Queue<int> myints;
  std::cout << "0. size: " << myints.size() << '\n';

  for (int i=0; i<5; i++) myints.push(i);
  std::cout << "1. size: " << myints.size() << '\n';

  myints.pop();
  std::cout << "2. size: " << myints.size() << '\n';

  return 0;
}

