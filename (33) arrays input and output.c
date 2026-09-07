#include <stdio.h>

int main()
{
	int marks[5];

	for (int i = 0; i < 5; i++)
	{
		printf("enter the marks of students\n");
		scanf("%d", &marks[i]);
	}

printf("the marks are respectively \n");
	for (int a = 0; a < 5; a++)
	{
	printf("%d \n", marks[a]);
	}

	return 0;
}