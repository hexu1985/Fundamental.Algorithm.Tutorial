// stack::push/pop
#include <iostream>     // std::cout
#include "ListStack.hpp"    // stack

int main ()
{
  ListStack<int> mystack;

  for (int i=0; i<5; ++i) mystack.push(i);

  std::cout << "Popping out elements...";
  while (!mystack.isEmpty())
  {
     std::cout << ' ' << mystack.top();
     mystack.pop();
  }
  std::cout << '\n';

  return 0;
}
