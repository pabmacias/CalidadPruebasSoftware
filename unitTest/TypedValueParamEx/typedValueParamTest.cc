#include <iostream>
#include "gtest/gtest.h"
#include "valueParametrized.h"

using ::testing::Range;
using ::testing::Values;
using ::testing::ValuesIn;
using ::testing::Bool;
using ::testing::Combine;

template <class T>
class Fixture : public ::testing::Test
{
//public:
  //T type;

  /*void SetUp()
  {
    type = new T;
  }

  void TearDown()
  {
    delete type;
  }*/
};

typedef ::testing::Types<int> implementations;

TYPED_TEST_CASE(Fixture, implementations);

TYPED_TEST(Fixture, implementations)
{
  this->parent->doSomething();
}
