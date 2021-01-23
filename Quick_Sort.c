#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

quickSort(int A[], int p, int r)
{
	int q;

	if (p < r)
	{
		q = partition(A, p, r);
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, r);
	}
}

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
	B[i+1] = B[rr];
	B[rr] = b;

	return i + 1;
}

int main(void)
{
	int num[SIZE] = { 31,8,48,73,11,3,20,29,65,15 };

	printf("정렬 전 배열\n");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", num[i]);

	quickSort(num, 0, SIZE-1);

	printf("\n정렬 후 배열\n");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", num[i]);

	return 0;
}