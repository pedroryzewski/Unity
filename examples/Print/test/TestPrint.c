#include <stdio.h>
#include <string.h>
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Print);

TEST_SETUP(Print)
{
}

TEST_TEAR_DOWN(Print)
{
}

TEST(Print, Test1)
{
  // All of these should pass
  TEST_ASSERT_EQUAL(2, 2);
  TEST_ASSERT_EQUAL(1, 1);
}

TEST(Print, Test2)
{
  // This test will fail
  TEST_ASSERT_EQUAL(2, 2);
}

TEST(Print, Test3)
{
  char output[20];
  memset(output,0xaa, sizeof output);
  TEST_ASSERT_EQUAL(5,sprintf(output,"hello"));
  TEST_ASSERT_EQUAL_STRING("hello",output);
  TEST_ASSERT_BYTES_EQUAL(0xaa,output[6]);
}