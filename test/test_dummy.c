#include "unity.h"
#include "def.h"

//extern void DelayMs(uint8_t ms);

uint8_t tick;

void setUp(void)
{
}

void tearDown(void)
{
}

void test_dummy(void)
{
    //isElapsed_IgnoreAndReturn(1);
    tick = 0U;

    uint8_t ret = isElapsed(0,1);
    TEST_ASSERT_EQUAL_UINT8(0, ret);
}
