#include <stdio.h>
#include <stdlib.h>

bubbleSort(int A[], int n)
{
	int a;
	for (int last = n; last > 1; last--)
	{
		int sorted = 1;
		for (int i = 0; i < last - 1; i++)
		{
			if (A[i] > A[i + 1])
			{
				a = A[i];
				A[i] = A[i + 1];
				A[i + 1] = a;
				sorted = 0;
			}
		}
		if (sorted == 1) return;
	}
}

int main(void)
{
	int num[10] = { 3,31,48,73,8,11,20,29,65,15 };

	printf("현재 배열의 상태\n");
	for(int i=0;i<sizeof(num)/sizeof(int); i++)
		printf("%d ", num[i]);

	bubbleSort(num, sizeof(num) / sizeof(int));

	printf("\n정렬 후 배열의 상태\n");
	for (int i = 0; i < sizeof(num) / sizeof(int); i++)
		printf("%d ", num[i]);

	return 0;
}