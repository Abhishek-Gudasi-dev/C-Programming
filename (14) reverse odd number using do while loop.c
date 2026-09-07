#include <stdio.h>

int main()
{
	int num;
	int index;
	int identify;

	printf("enter a number\n");
	scanf("%d", &num);
	identify = num % 2;

	if (identify == 0)
	{
		num = num - 1;
	}

	do
	{
		printf("%d\n", num);
		num = num - 2;

	} while (num > 0);

	return 0;
}