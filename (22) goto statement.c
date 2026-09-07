#include <stdio.h>

int main()
{
	int a;

	printf("enter a number \n");
	scanf("%d", &a);

	if (a >= 100)
	{
		
		goto end;
	}

	for (int s = 0; s < a; s++)

	{
		printf("%d\n", s);
	}
	if (a>=100){
	end:
	{
	printf("ye nan munnya 100 valagin number badi no");
	}   
	}
	
	return 0;
}
