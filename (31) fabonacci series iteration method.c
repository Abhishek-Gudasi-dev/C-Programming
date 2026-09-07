#include <stdio.h>

int main()
{
	int num, a, b, c, d;

	printf("enter a number");
	scanf("%d", &num);
	for (a = 0; a < num; a++)
		if (a == 0)
		{
			b = a;
			printf("0 ");
		}
		else if (a == 1)
		{
			c = a;
			printf("1 ");
		}
		else
		{
			d = b + c;
			printf("%d ", d);
			b = c;
			c = d;
		}

	return 0;
}
