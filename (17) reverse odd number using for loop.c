#include <stdio.h>

int main()
{
	int num;

	printf("enter a number\n");
	scanf("%d", &num);
	if (num > 0)
	{
		if (num % 2 == 0)
		{
			num = num - 1;
		}
		for (; 0 < num; num = num - 2)
		{
			printf("%d\n", num);
		}
	}

	else
	{
		printf("please enter positive non zero number\n");
	}

	return 0;
}