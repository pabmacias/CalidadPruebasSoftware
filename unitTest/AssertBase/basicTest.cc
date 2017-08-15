#include "gtest/gtest.h"

TEST(TestCaseName1, TestName1)
{
  EXPECT_FALSE(true);
}

TEST(TestCaseName1, TestName2)
{
  ASSERT_TRUE(true);
}

TEST(TestCaseName1, TestName3)
{
  SUCCEED();
}

TEST(TestCaseName1, TestName4)
{
  FAIL();
}

TEST(TestCaseName1, TestName5)
{
  ADD_FAILURE();
}

TEST(TestCaseName2, TestName6)
{
  ASSERT_EQ(2,1);
}

TEST(TestCaseName2, TestName7)
{
  EXPECT_NE(2,1);
}

TEST(TestCaseName2, TestName8)
{
  EXPECT_LT(1,2);
}

TEST(TestCaseName2, TestName9)
{
  ASSERT_LE(1,2);
}

TEST(TestCaseName2, TestName10)
{
  EXPECT_GT(1,2);
}

TEST(TestCaseName2, TestName11)
{
  ASSERT_GE(2,1);
}

TEST(TestCaseName3, TestName12)
{
  EXPECT_STREQ("hola","halo");
}

TEST(TestCaseName3, TestName13)
{
  ASSERT_STRNE("hola","halo");
}

TEST(TestCaseName3, TestName14)
{
  ASSERT_STRCASEEQ("hola","halo");
}

TEST(TestCaseName3, TestName15)
{
  ASSERT_STRCASENE("hola","halo");
}

TEST(TestCaseName4, TestName14)
{
  EXPECT_FLOAT_EQ(2.2, 2.2);
}

TEST(TestCaseName4, TestName15)
{
  EXPECT_DOUBLE_EQ(2.1, 2.2);
}

TEST(TestCaseName4, TestName16)
{
  ASSERT_NEAR(2.2, 2.1, 0.2);
}
