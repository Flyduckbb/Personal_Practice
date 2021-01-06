/*#include <stdio.h>
#include <stdlib.h>

double Power(double x, int n)
{
	if (n == 0)
		return 1;
	else if ((n % 2) == 0)
		return Power(x * x, n / 2);
	else return x * Power(x * x, (n - 1) / 2);
}

int main(void)
{
	double base = 0.0;
	int power = 0;
	scanf("%lf %d", &base, &power);
	double outcome = Power(base ,power);
	printf("%.2lf", outcome);
}*/