// stack::top
#include <iostream>     // std::cout
#include "ArrayStack.hpp"    // stack

int main ()
{
  ArrayStack<int,100> mystack;

  mystack.push(10);
  mystack.push(20);

  mystack.top() -= 5;

  std::cout << "mystack.top() is now " << mystack.top() << '\n';

  return 0;
}
