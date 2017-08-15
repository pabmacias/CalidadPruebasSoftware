#include "gtest/gtest.h"
#include "PrimoCircular.h"

TEST(PrimoCircularSucceed, ntest1)
{
  int p[1] = {2};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 1));
}

TEST(PrimoCircularSucceed, ntest2)
{
  int p[1] = {3};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 1));
}

TEST(PrimoCircularSucceed, ntest3)
{
  int p[1] = {5};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 1));
}

TEST(PrimoCircularSucceed, ntest4)
{
  int p[1] = {7};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 1));
}

TEST(PrimoCircularSucceed, ntest5)
{
  int p[2] = {1, 1};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 2));
}

TEST(PrimoCircularSucceed, ntest6)
{
  int p[2] = {1, 3};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 2));
}

TEST(PrimoCircularSucceed, ntest7)
{
  int p[2] = {1, 7};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 2));
}

TEST(PrimoCircularSucceed, ntest8)
{
  int p[2] = {3, 7};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 2));
}

TEST(PrimoCircularSucceed, ntest9)
{
  int p[2] = {7, 9};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 2));
}

TEST(PrimoCircularSucceed, ntest10)
{
  int p[3] = {1, 1, 3};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 3));
}

TEST(PrimoCircularSucceed, ntest11)
{
  int p[3] = {1, 9, 7};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 3));
}

TEST(PrimoCircularSucceed, ntest12)
{
  int p[3] = {1, 9, 9};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 3));
}

TEST(PrimoCircularSucceed, ntest13)
{
  int p[3] = {3, 3, 7};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 3));
}

TEST(PrimoCircularSucceed, ntest14)
{
  int p[4] = {1, 1, 9, 3};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 4));
}

TEST(PrimoCircularSucceed, ntest15)
{
  int p[4] = {3, 7, 7, 9};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 4));
}

TEST(PrimoCircularSucceed, ntest16)
{
  int p[5] = {1, 1, 9, 3, 9};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 5));
}

TEST(PrimoCircularSucceed, ntest17)
{
  int p[5] = {1, 9, 9, 3, 7};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 5));
}

TEST(PrimoCircularSucceed, ntest18)
{
  int p[6] = {1, 9, 3, 9, 3, 9};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 6));
}

TEST(PrimoCircularSucceed, ntest19)
{
  int p[6] = {1, 9, 9, 9, 3, 3};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 6));
}

TEST(PrimoCircularFail, ntest20)
{
  int p[2] = {1, 5};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 2));
}

TEST(PrimoCircularFail, ntest21)
{
  int p[2] = {-1, -5};
  int temp[100] = {0};

  EXPECT_TRUE(primoCircular(true, p, temp, 0, 0, 2));
}
