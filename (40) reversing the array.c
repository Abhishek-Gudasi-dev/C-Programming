#include <stdio.h>

int main()
{
	int num[5];

	for (int i = 0,s=1; i < 5; i++,s++)
	{
		printf("enter the number %d\n",s);
		scanf("%d", &num[i]);
	}

printf("the numbers are  \n");
	for (int a = 4; a>=0; a--)
	{
	printf("%d \n", num[a]);
	}

	return 0;
}