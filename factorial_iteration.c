#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	num = factorial(num);
	printf("%d", num);
}

int factorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		printf("Factorial(%d)\n", n-i+1);
		result *= i;
	}
	return(result);
}