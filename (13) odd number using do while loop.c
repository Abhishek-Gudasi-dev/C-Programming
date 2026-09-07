#include <stdio.h>

int main()
{
	int num;
	int index = 1;

	printf("enter a number\n");
	scanf("%d", &num);

	do
	{
		printf("%d\n", index);
		index = index + 2;

	} while (index <= num);

	return 0;
}