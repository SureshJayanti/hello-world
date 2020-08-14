#include <stdio.h>
#include "Prime.h"
#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void Test_Function_IsPrime_With_A_PrimeNumber()
{
    TEST_ASSERT_EQUAL(1, IsPrime(7));
}

void Test_Function_IsPrime_With_Not_A_PrimeNumber()
{
    TEST_ASSERT_EQUAL(0, IsPrime(9));
}

//int main(void)
//{
//    UNITY_BEGIN();
//    RUN_TEST(Test_Function_IsPrime_With_A_PrimeNumber);
//    RUN_TEST(Test_Function_IsPrime_With_Not_A_PrimeNumber);
//    return UNITY_END();
//}
