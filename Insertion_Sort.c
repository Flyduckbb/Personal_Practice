#include <stdio.h>
#include <stdlib.h>

insertion_Sort(int A[], int n)
{
	int loc, newItem;
	for (int i = 1; i < n; i++)
	{
		loc = i - 1;
		newItem = A[i];

		while (loc >= 1 && newItem < A[loc])
		{
			A[loc + 1] = A[loc];
			loc--;
		}
		A[loc + 1] = newItem;
	}
}

int main(void)
{
	int num[10] = { 3,31,48,73,8,11,20,29,65,15 };

	printf("현재 배열의 상태\n");
	for (int i = 0; i < sizeof(num) / sizeof(int); i++)
		printf("%d ", num[i]);

	insertion_Sort(num, sizeof(num) / sizeof(int));

	printf("\n정렬 후 배열의 상태\n");
	for (int i = 0; i < sizeof(num) / sizeof(int); i++)
		printf("%d ", num[i]);

	return 0;
}