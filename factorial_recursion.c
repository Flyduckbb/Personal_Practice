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
	if (n <= 1) return(1);
	else return (n * factorial(n - 1));
}