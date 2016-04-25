#include "quadratic.h"
int solve (float a, float b, float c, float *x1, float *x2)
{
	float d;
	d = b * b - 4 * a * c;
	if (!a)
		return 1;
	if (d > 0)
	{
		*x1 = (-b + sqrt(d)) / (2 * a);
		*x2 = (-b - sqrt(d)) / (2 * a);
		return 0;
	}
	if (d == 0)
	{
		*x1 = *x2 = -b / (2 * a);
		return 0;
	}
	return 2;
}