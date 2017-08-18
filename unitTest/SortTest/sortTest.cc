#include "gtest/gtest.h"
#include "sort.h"

template <class T>
class Fixture : public ::testing::Test
{
public:
  Sorts* sortTest;

  void SetUp()
  {
    sortTest = new T;
  }

  void TearDown()
  {
    delete sortTest;
  }
};

typedef ::testing::Types<BubbleSort, SelectionSort, InsertionSort> implementations;

TYPED_TEST_CASE(Fixture, implementations);

TYPED_TEST(Fixture, implementations)
{
  int array[] = {3,5,1,2,9};
  int n = 5;
  this->sortTest->sort(array, n);
}
