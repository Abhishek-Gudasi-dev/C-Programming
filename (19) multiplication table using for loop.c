#include <stdio.h>

int main()
{
	int a, s, b;

	printf("enter a number\n");
	scanf("%d", &a);

	b = a;

	if (a > 0)
	{
		printf("your multiplication table is \n");
		for (s = 1; s < 11; s = s + 1, a = b + a)
		{
			printf("%d*%d=%d\n", b, s, a);
		}
	}
	else
	{
		printf("please enter positive non zero number\n");
	}
	return 0;
}