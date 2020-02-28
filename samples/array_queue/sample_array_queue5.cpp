/** \example array_queue/sample_array_queue5.cpp
 * This is an example of how to use the ArrayQueue class.
 */
// ArrayQueue::size
#include <iostream>         // std::cout
#include "ArrayQueue.hpp"   // ArrayQueue

using namespace mini_algo;

int main ()
{
  ArrayQueue<int> myints(20);
  std::cout << "0. size: " << myints.size() << '\n';

  for (int i=0; i<5; i++) myints.push(i);
  std::cout << "1. size: " << myints.size() << '\n';

  myints.pop();
  std::cout << "2. size: " << myints.size() << '\n';

  return 0;
}

