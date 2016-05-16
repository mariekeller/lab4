#include <stdio.h>
#include <locale.h>
#include "quadratic.h"

int main ()
{
	setlocale(LC_ALL, "Russian");
	printf("Введите коэффициенты a, b, c:\n");
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	float x1, x2;
	int n = solve (a, b, c, &x1, &x2);
	if (n == -1)
		printf("x1 = x2 = %.3f\n", x1);
	else if (n == 0)
		printf("\nx1 = %.3f, x2 = %.3f\n",x1, x2);
	else if (n == 1)
		printf("\nКоэффициент a не должен быть равен 0\n");
	else
		printf("\nОтрицательный дискриминант\n");
	return 0;
}