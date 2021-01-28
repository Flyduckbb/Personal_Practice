/*#include <stdio.h>

void heapify(int* arr, int size)
{
	for (int i = 1; i < size; i++)
	{
		int child = i;
		do {
			int root = (child - 1) / 2;
			if (arr[root] < arr[child])
			{
				int temp = arr[root];
				arr[root] = arr[child];
				arr[child] = temp;
			}
			child = root;
		} while (child != 0);
	}
}

void heap(int* arry, int* size)
{
	int temp = arry[0];
	arry[0] = arry[*size - 1];
	arry[*size - 1] = temp;
	--(*size);
}

int main(void)
{
	int size = 10;
	int arry[10] = { 5,6,10,4,3,8,7,1,2,9 };

	for (int i = 0; i < 10; i++)
	{
		heapify(arry, size);
		heap(arry, &size);
	}

	for (int i = 0; i < 10; i++)
		printf("%d ", arry[i]);

	return 0;
}*/