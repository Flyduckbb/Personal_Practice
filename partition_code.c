/*#include <stdio.h>
#include <stdio.h>

partition(int B[], int pp, int rr)
{
	int x = B[rr];
	int i = pp - 1;
	for (int j = pp; j < rr; j++)
	{
		if (B[j] <= x)
		{
			int a = B[++i];
			B[i] = B[j];
			B[j] = a;
		}

	}
	int b = B[i + 1];
	B[i + 1] = B[rr];
	B[rr] = b;

	return i + 1;
}*/