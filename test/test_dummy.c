#ifdef TEST
    #include <stdint.h>
    #include "unity.h"
    #include "util.h"
    #include "def.h"


uint8_t tick;

void setUp(void)
{
}

void tearDown(void)
{
}

void test_dummy(void)
{
    tick = 0U;

    uint8_t ret = isElapsed(0, 1);
    TEST_ASSERT_EQUAL_UINT8(0, ret);
}
#endif
