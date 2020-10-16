#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Print)
{
  RUN_TEST_CASE(Print, Test1);
  RUN_TEST_CASE(Print, Test2);
  RUN_TEST_CASE(Print, Test3);
}
