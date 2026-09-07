#include <stdio.h>

int reverse(int num)
{
	int reversed = 0, temp = 0;
	while (num!=0)
	{
		reversed = reversed * 10;
		temp = num % 10;
		reversed = reversed + temp;
		// bhai inn 3 lines ko ""reversed = reversed * 10 + num % 10;"" aise bhi likh sakte hai 
		num = num / 10;
		
	}
	return reversed;
}


int main()
{
	int num;
	printf("enter a number : \n");
	scanf("%d", &num);

	printf("the revese of the number is %d\n",reverse(num));

	return 0;
}