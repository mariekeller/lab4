#include <ctest.h>
#include "quadratic.h"

CTEST(quadratic, zero)
{
    const float a = 0;
    const float b = 1;
    const float c = 2;
	
    float x1;
    float x2;

    const int res = solve(a, b, c, &x1, &x2);
    
    const int expected_res = 1;

    ASSERT_EQUAL(expected_res, res);
}

CTEST(quadratic, two_roots)
{
    const float a = 1;
    const float b = 10;
    const float c = -24;
	
    float x1;
    float x2;

    const int res = solve(a, b, c, &x1, &x2);
    
    const int expented_res = 0;
	
    const int expected_x1 = 2;
    const int expected_x2 = -12;
	
    ASSERT_EQUAL (expented_res, res);
    ASSERT_DBL_NEAR(expected_x1, x1);
    ASSERT_DBL_NEAR(expected_x2, x2);
}

CTEST(quadratic, equal_roots)
{
    const float a = 1;
    const float b = 6;
    const float c = 9;
	
    float x1;
    float x2;

    const int res = solve(a, b, c, &x1, &x2);

    const int expented_res = -1;

    const int expected_x1 = -3;
    const int expected_x2 = -3;
	
    ASSERT_EQUAL (expented_res, res);
    ASSERT_DBL_NEAR(expected_x1, x1);
}

CTEST(quadratic, negative_discriminant)
{
    const float a = 2;
    const float b = 1;
    const float c = 2;
	
    float x1;
    float x2;

    const int res = solve(a, b, c, &x1, &x2);

    const int expected_res = 2;
    
    ASSERT_EQUAL (expented_res, res);
}
