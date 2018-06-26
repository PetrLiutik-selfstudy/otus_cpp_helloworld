#include <iostream>
#include "gtest/gtest.h"
#include "ver_lib.h"

TEST(ver_test_case, ver_major_test)
{
  EXPECT_GE(ver_major(), 1);
}

TEST(ver_test_case, ver_minor_test)
{
  EXPECT_GE(ver_minor(), 1);
}

TEST(ver_test_case, ver_patch_test)
{
  EXPECT_GE(ver_patch(), 1);
}