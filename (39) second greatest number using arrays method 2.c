#include <stdio.h>
// store privious largest number before updating it
int main()
{
	int num[5], sum = 0;
	for (int i = 0, j = 1; i < 5; i++, j++)
	{
		printf("enter the number %d\n", j);
		scanf("%d", &num[i]);
	}
	int a = 0;
	int c=1;

	for (int b = 0; b < 5; b++)
	{
		if (num[a] < num[b])
		{
			c = a;
			a = b;
			
		}
		 
		else if (num[c] < num[b]&& num[b]!=num[a])
		{
			c = b;
		}
		
	}
	printf("the second greates number is %d", num[c]);
	return 0;
}
