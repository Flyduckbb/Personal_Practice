#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

heapSort(int A[], int n)
{
	buildHeap(A, n);
	for (int i = n; i > 1; i--)
	{
		int a = A[0];
		A[0] = A[i];
		A[i] = a;
		heapify(A, 0, i - 1);
	}
}

buildHeap(int B[], int m)
{
	for (int i = (m / 2); i >= 0; i--)
		heapify(B, i, m);
}

heapify(int C[], int k, int o)
{
	int left = 2*k;
	int right = 2 * k + 1;



}

int main(void)
{
	int arry[SIZE] = { 3,6,4,8,9,7 };

	printf("정렬 전 이진 트리\n");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", arry[i]);

	heapSort(arry, SIZE - 1);

	printf("\n정렬 후 이진 트리\n");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", arry[i]);

	return 0;
}