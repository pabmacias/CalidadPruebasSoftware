#include <iostream>

template <class T>
void printValue(T value)
{
  std::cout<<value<<std::endl;
}

template <class P, class Q>
void printValues(P value1, Q value2)
{
  std::cout<<value1<<" "<<value2<<std::endl;
}
