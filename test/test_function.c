#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <function.h>
#include <string.h>
#define PROJECT_NAME "Function"

/* Prototypes for all the test functions */
void test_CheckBalance();
void test_Deposit(int);
void test_Withdraw(int);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

/* Add your test functions in this format for testing*/
  CU_add_test(suite, "Deposit", test_Deposit);
  CU_add_test(suite, "Withdraw", test_Withdraw);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}
/* Write all the test functions */
void test_Deposit(int) {
  CU_ASSERT(1000 == Deposit(1000));
  CU_ASSERT(2000 == Deposit(2000));
  CU_ASSERT(3000== Deposit(3000));
  CU_ASSERT(4000 == Deposit(4000));
  CU_ASSERT(5000 == Deposit(5000));

  /* Dummy fail*/
  CU_ASSERT(50 == Deposit(500));
}

void test_Withdraw(int) {
  CU_ASSERT(700 == Withdraw(700));
  CU_ASSERT(300 == Withdraw(300));
  CU_ASSERT(200 == Withdraw(200));
  CU_ASSERT(100 == Withdraw(100));

  /* Dummy fail*/
  CU_ASSERT(0 == Withdraw(6));
}
