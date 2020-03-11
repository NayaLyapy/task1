#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "myfunc.h"
}

TEST(test1, suite1)
{
   struct pair par;
   par.x = 0;
   par.y = 4;

  struct pair pair = square(1, 0, -4);
  ASSERT_NEAR(pair.x, pair.x, 0.001);
  ASSERT_NEAR(pair.y, pair.y, 0.001);
}

TEST(test2, suite2)
{
    struct pair par;
    par.x = 2;
    par.y = 2;

struct pair pair = square(1,-4,4);
ASSERT_NEAR(pair.x, pair.x, 0.001);
ASSERT_NEAR(pair.y, pair.y, 0.001);

}
TEST(test3, suite3)
{

}
