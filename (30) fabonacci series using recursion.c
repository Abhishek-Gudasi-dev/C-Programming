#include <stdio.h>

int f(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		int a = f(n - 1) + f(n - 2);
		return a;
	}
}
int main ()
{
	int b;
	printf("enter a number\n");
	scanf("%d",&b);
	printf("the fabonacci up to%dth number\n",b);
	for(int n=0;n<=b;n++)
	printf("%d\n",f(n));
	
	return 0;
}