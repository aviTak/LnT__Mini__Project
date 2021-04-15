#include "unity.h"
#include "header.h"

/* Modify these two lines according to the project */

#define PROJECT_NAME  "Library Management"

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}


void test_Display(){
  book h = {"Ayushi-1", "sdfd433", "999999"};
  TEST_ASSERT_EQUAL(SUCCESS, PrintLink(&h));
}

void test_Insert(){
  book h = {"Ayushi-1", "sdfg433", "999999"};
  TEST_ASSERT_EQUAL(SUCCESS, insert(&h));
}

void test_Delete(){
  book h = {"Ayushi-2", "sdfdf3", "999999"};
  TEST_ASSERT_EQUAL(SUCCESS, Delete(&h));
}

    


int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_Display);
    RUN_TEST(test_Insert);
    RUN_TEST(test_Delete);
    
    /* Close the Unity Test Framework */
    return UNITY_END();
}