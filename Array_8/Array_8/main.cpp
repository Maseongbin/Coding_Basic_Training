#include <stdio.h>

void func(int arr[][4], int rows);

int main()
{
	int arr[2][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} };

	func(arr, 2);

	return 0;
}

void func(int arr[][4], int rows)
{
	int i, j;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
}