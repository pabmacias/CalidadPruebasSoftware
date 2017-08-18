#include <iostream>

class Parent
{
public:
  virtual void doSomething() = 0;
};

class Child1 : public Parent
{
public:
  void doSomething()
  {
    std::cout<<"Child 1"<<std::endl;
  }
};

class Child2 : public Parent
{
public:
  void doSomething()
  {
    std::cout<<"Child 2"<<std::endl;
  }
};

class Child3 : public Parent
{
public:
  void doSomething()
  {
    std::cout<<"Child 3"<<std::endl;
  }
};
