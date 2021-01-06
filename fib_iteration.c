/*#include <stdio.h>
#include <stdlib.h>

int fib_iter(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	
	int pp = 0;
	int p = 1;
	int result = 0;

	for (int i = 2; i <= n; i++)
	{
		result = pp + p;
		pp = p;
		p = result;
	}
	return result;
}

int main(void)
{
	int num;
	scanf("%d", &num);
	num = fib(num);
	printf("%d", num);

	return 0;
}*/