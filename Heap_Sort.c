#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

heapSort(int A[], int n)
{
	buildHeap(A, n);
	for (int i = n; i > 1; i--)
	{

	}
}

int main(void)
{
	int arry[SIZE] = { 3,6,4,8,9,7 };

	printf("���� �� ���� Ʈ��\n");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", arry[i]);

	heapSort(arry, SIZE - 1);

	printf("\n���� �� ���� Ʈ��\n");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", arry[i]);

	return 0;
}