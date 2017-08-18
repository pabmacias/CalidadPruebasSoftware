#include <iostream>
#include "gtest/gtest.h"
#include "valueParametrized.h"

using ::testing::Range;
using ::testing::Values;
using ::testing::ValuesIn;
using ::testing::Bool;
using ::testing::Combine;

class FixtureInt : public ::testing::TestWithParam<int>
{

};

class FixtureChar : public ::testing::TestWithParam<char>
{

};

class FixtureBool : public ::testing::TestWithParam<bool>
{

};

class FixtureCombinations : public ::testing::TestWithParam< ::testing::tuple<int,int> >
{
public:
  int value1 = ::testing::get<0>(GetParam());
  int value2 = ::testing::get<1>(GetParam());


  //printValues(value1, value2);
};

TEST_P(FixtureInt, test1)
{
  printValue(GetParam());
}

TEST_P(FixtureChar, test2)
{
  printValue(GetParam());
}

TEST_P(FixtureBool, test3)
{
  printValue(GetParam());
}

TEST_P(FixtureCombinations, test4)
{
  printValues(value1, value2);
}

INSTANTIATE_TEST_CASE_P(enteros, FixtureInt, Values(1,2,3,4,5));

char array[] = {'a', 'b', 'c', 'd', 'e'};
INSTANTIATE_TEST_CASE_P(caracteres, FixtureChar, ValuesIn(array));

INSTANTIATE_TEST_CASE_P(caracteres, FixtureBool, Bool());

INSTANTIATE_TEST_CASE_P(combinacion, FixtureCombinations, Combine(Range(1,11,1), Range(1,11,1)));
