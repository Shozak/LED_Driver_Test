#include "C:\Users\Mazen\Desktop\unity\src\unity.h"
#include "funktioner.h"


void test_aktiv_eff(void)
{
TEST_ASSERT_EQUAL_FLOAT(12, aktiv_eff(3, 4, 1));
TEST_ASSERT_EQUAL_FLOAT(7, aktiv_eff(1, 7, 1));
TEST_ASSERT_EQUAL_FLOAT(4.5, aktiv_eff(3, 3, 0.5));
}
void test_sken_3fas(void)
{
TEST_ASSERT_EQUAL_FLOAT(12, sken_3fas(3 , 4 ));
TEST_ASSERT_EQUAL_FLOAT(7, sken_3fas(1, 7));
TEST_ASSERT_EQUAL_FLOAT(9, sken_3fas(3, 3));
}

void test_aktiv_3fas(void)
{
TEST_ASSERT_EQUAL_FLOAT(56, aktiv_3fas(7, 8, 1));
TEST_ASSERT_EQUAL_FLOAT(12, aktiv_3fas(1, 12, 1));
TEST_ASSERT_EQUAL_FLOAT(12, aktiv_3fas(2, 12, 0.5));
}

int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_aktiv_eff);
RUN_TEST(test_sken_3fas);
RUN_TEST(test_aktiv_3fas);
return UNITY_END();
}
