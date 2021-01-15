/*#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

mergeSort(int A[], int p, int r)
{
	if (p < r)
	{
		int q = (p + r) / 2;
		mergeSort(A, p, q);
		mergeSort(A, q + 1, r);
		merge(A, p, q, r);
	}
}

merge(int B[], int p, int q, int r)
{
	int tmp[SIZE] = { 0 };
	int i = p;
	int j = q + 1;
	int t = 0;

	while (i <= q && j <= r)
	{
		if (B[i] <= B[j])
			tmp[t++] = B[i++];
		else
			tmp[t++] = B[j++];
	}

	while (i <= q)
		tmp[t++] = B[i++];
	
	while (j <= r)
		tmp[t++] = B[j++];

	i = p; t = 0;

	while (i <= r)
		B[i++] = tmp[t++];
}

int main(void)
{
	int num[SIZE] = { 31,3,65,73,8,11,20,29,48,15 };

	printf("정렬 전 배열\n");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", num[i]);

	mergeSort(num, 0, SIZE-1);

	printf("\n");
	printf("정렬 후 배열\n");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", num[i]);

	return 0;
}*/