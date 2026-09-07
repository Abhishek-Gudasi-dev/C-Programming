#include <stdio.h>

void triangle(int num)
{
	for (int i = 1; i <= num; i++)
	{
		
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void reverse_triangle(int num)
{
	for (int i = num; i > 0; i--)
	{
		
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
	printf("\n");
	}
}
int main()
{
	int menu, num;
	printf("1.to print triangle\n2.to print reverse triangle\n");
	scanf("%d", &menu);

	if (menu == 1)
	{
		printf("enter a number \n");
		scanf("%d", &num);
		triangle(num);
	}
	else if (menu == 2)
	{
		printf("enter a number \n");
		scanf("%d", &num);
		reverse_triangle(num);
	}
	else
	{
		printf("please enter a valid number");
	}
	return 0;
}