#include <stdio.h>

int main()
{
	int a;

	printf("enter a number \n");
	scanf("%d", &a);

	for (int s=0; s < a; s++)
		
	{
		
		if (s>=100)
		{
			break;
		}
		printf("%d\n", s);
	}
	return 0;
}
