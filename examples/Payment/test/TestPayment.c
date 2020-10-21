#include "payment.h"
#include "unity.h"
#include "unity_fixture.h"
#include <string.h>

TEST_GROUP(Payment);

TEST_SETUP(Payment)
{
}

TEST_TEAR_DOWN(Payment)
{
}

TEST(Payment, Test1) //Test if the function works
{
  int output;
  float value;
  char status[20];

  value = 0.4;
  strcpy(status,"regular");
  output = payment(value, status);
  TEST_ASSERT_EQUAL_INT(0, output);

  value = 15;
  strcpy(status,"estudante");
  output = payment(value, status);
  TEST_ASSERT_EQUAL_INT(0, output);
  
  value = 100;
  strcpy(status,"aposentado");
  output = payment(value, status);
  TEST_ASSERT_EQUAL_INT(0, output);
  
  value = 15000.7;
  strcpy(status,"vip");
  output = payment(value, status);
  TEST_ASSERT_EQUAL_INT(0, output);
}

TEST(Payment, Test2) //Test if it doesnt works
{
  int output;
  float value;
  char status[20];

  value = -5;
  strcpy(status,"regular");
  output = payment(value, status); 
  TEST_ASSERT_EQUAL_INT(1, output);

  value = 100000;
  strcpy(status,"aposentado");
  output = payment(value, status);
  TEST_ASSERT_EQUAL_INT(1, output);
  
  value = -4;
  strcpy(status,"gwjhij");
  output = payment(value, status);
  TEST_ASSERT_EQUAL_INT(1, output);
  //value é o primeiro a ser verificado, se fosse verificado primeiro o status a saída seria 2

  value = 15;
  strcpy(status,"Batata");
  output = payment(value, status);
  TEST_ASSERT_EQUAL_INT(2, output);

  value = 1;
  strcpy(status,"");
  output = payment(value, status);
  TEST_ASSERT_EQUAL_INT(2, output);
}


TEST(Payment, Test3) //Limit Test
{
  int output;
  float value;
  char status[20];

  value = 99999;
  strcpy(status,"regular");
  output = payment(value, status);
  TEST_ASSERT_EQUAL_INT(0, output);

  value = 0.01;
  strcpy(status,"regular");
  output = payment(value, status);
  TEST_ASSERT_EQUAL_INT(0, output);
  
  value = 100000;
  strcpy(status,"regular");
  output = payment(value, status);
  TEST_ASSERT_EQUAL_INT(1, output);
  
  value = 0;
  strcpy(status,"regular");
  output = payment(value, status);
  TEST_ASSERT_EQUAL_INT(1, output);
}

TEST(Payment, Test4) //Test MAX and MIN
{

}
