#include <stdio.h>
#include <stdlib.h>

void selectionSort(int A[], int n)
{
	int a;
	for (int last = n-1; last>0; last--)
	{
		int k = theLargest(A, last);

		a = A[k];
		A[k] = A[last];
		A[last] = a;
	}
}

int theLargest(int B[], int end)
{
	int largest = 0;
	for (int i = 1; i <= end; i++)
	{
		if (B[i] > B[largest])
			largest = i;
	}

	return largest;
}

int main(void)
{
	int num[10] = { 46,2,12165,49,54,1,323,69,55,423 };

	printf("정렬 전 배열 : ");
	for (int i = 0; i < sizeof(num)/sizeof(int); i++)
	{
		printf(" %d", num[i]);
	}
	printf("\n");

	selectionSort(num,sizeof(num)/sizeof(int));

	printf("정렬 후 배열 : ");
	for (int i = 0; i < sizeof(num) / sizeof(int); i++)
	{
		printf(" %d", num[i]);
	}
	printf("\n");

	return 0;
}