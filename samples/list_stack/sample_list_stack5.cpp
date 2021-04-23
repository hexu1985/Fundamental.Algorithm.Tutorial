// stack::top
#include <iostream>     // std::cout
#include "ListStack.hpp"    // stack

int main ()
{
  ListStack<int> mystack;

  mystack.push(10);
  mystack.push(20);

  mystack.top() -= 5;

  std::cout << "mystack.top() is now " << mystack.top() << '\n';

  return 0;
}
