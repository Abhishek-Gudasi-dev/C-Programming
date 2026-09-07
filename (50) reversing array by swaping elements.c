#include <stdio.h>

void swap(int *ptr)
{
	for (int i = 0, j = 6; i < 4; i++, j--)
	{
		int a = ptr[i];
		ptr[i] = ptr[j];
		ptr[j] = a;
	}
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	printf(" the array is : ");
	for (int i = 0; i < 7; i++)
	{
		printf("%d", arr[i]);
	}
	swap(arr);
	printf("\n the reversed array is : ");
	for (int i = 0; i < 7; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}