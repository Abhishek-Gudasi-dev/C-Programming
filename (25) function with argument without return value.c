#include <stdio.h>

void printstar(int a);

int main()
{
	int a;
	printf(" enter a number \n");
	scanf("%d", &a);
	printstar(a);
	return 0;
	
}

void printstar(int a)
{
	
	for (int i = 1; i < a; i++)
	{
		printf("%c", 'x');
	}
	
}