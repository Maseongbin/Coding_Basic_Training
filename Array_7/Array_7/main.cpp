#include <stdio.h>

void func(int arr[], int len);

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };

	func(arr, sizeof arr / sizeof(int));

	return 0;
}

void func(int arr[], int len)
{
	int i;

	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}