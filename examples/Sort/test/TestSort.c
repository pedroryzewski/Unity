#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{
}

TEST_TEAR_DOWN(Sort)
{
}

TEST(Sort, Test1)
{
  int vetor[6] = {3,8,2,9,0,2};
  sort(vetor,6);
  TEST_ASSERT_NOT_NULL(vetor);
}

TEST(Sort, Test2)
{
  int vetor[6] = {3,8,2,9,0,2};
  sort(vetor,6);
  TEST_ASSERT_GREATER_THAN(vetor[1],vetor[4]);
}

/*TEST(Sort, Test4)
{
  // All of these should pass
  int vetor[6] = {3,8,2,9,0,2};
  sort(vetor,6);
  TEST_ASSERT_EQUAL(vetor[0],0);
  TEST_ASSERT_EQUAL(vetor[2],2);
  TEST_ASSERT_EQUAL(vetor[5],9);
}*/

TEST(Sort, Test3)
{
  int vetor[6] = {3,8,2,9,0,2};
  int corrected_vetor[6] = {0,2,2,3,8,9};
  sort(vetor,6);
  TEST_ASSERT_EQUAL_INT32_ARRAY(vetor,corrected_vetor,5);
}

