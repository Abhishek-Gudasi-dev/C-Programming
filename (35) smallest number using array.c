#include <stdio.h>

int main()
{
	int num[5];
	for (int i = 0; i < 5; i++)
	{
		printf("enter the numbers\n");
		scanf("%d", &num[i]);
	}
	int a = 0;

	for (int b = 0; b < 5; b++)
	{
		if (num[b] < num[a])
		{
			a = b;
		}
	}
	printf("the smallest number is %d", num[a]);
	return 0;
}
