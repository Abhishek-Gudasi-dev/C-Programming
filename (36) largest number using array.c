#include <stdio.h>

int main()
{
	int num[5], sum = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("enter the numbers\n");
		scanf("%d", &num[i]);
	}
	int a=0;
	label:
	for (; a < 5;)
	{
		for (int b = 0; b < 5; b++)
		{
			if (num[a] < num[b])
			{
				a = b;
				goto label;
			}
			
		}
		printf("the greates number is %d", num[a]);
	return 0;
	}
	
}