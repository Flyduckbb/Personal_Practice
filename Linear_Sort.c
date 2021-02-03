/*#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

select(int A[],int p, int r, int i)
{
	if (p = r)
		return A[p];

	int q;
	q=partition(A, p, r);

	int k;
	k=q - p + 1;

	if (i < k)
		return select(A, p, q - 1, i);
	else if (i = k)
		return A[q];
	else
		select(A, q + 1, r, i - k);
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
	B[i + 1] = B[rr];
	B[rr] = b;

	return i + 1;
}

int main(void)
{
	int arry[SIZE] = { 31,8,48,73,11,3,20,29,65,15 };
	int num;

	printf("원하는 번째 값 출력\n");
	scanf("%d", &num);

	printf("평균 선형 시간 선택 알고리즘 적용 전 배열\n");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", arry[i]);

	select(arry, 0, SIZE - 1, num);

	printf("\n해당 번째의 값\n");
	printf("%d", arry[num-1]);

	return 0;
}*/