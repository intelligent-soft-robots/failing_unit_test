#include "gtest/gtest.h"

class Failing_unit_test_tests : public ::testing::Test
{
protected:
    void SetUp()
    {
    }
    void TearDown()
    {
    }
};

TEST_F(Failing_unit_test_tests, success)
{
  ASSERT_EQ(1,1);
}

TEST_F(Failing_unit_test_tests, failure)
{
  ASSERT_EQ(1,2);
}

