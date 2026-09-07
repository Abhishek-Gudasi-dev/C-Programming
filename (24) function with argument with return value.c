#include <stdio.h>
int sum (int a, int b)
{
	return a+b;
}

int main ()
{
	int a= 9;
	int b= 37;
	int c = sum (a , b );
	printf(" the sum is %d",c);
	return 0;
	
}