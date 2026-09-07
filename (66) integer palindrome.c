#include <stdio.h>

int reverse(int num)
{
	int reversed = 0;
	while (num != 0)
	{
		reversed = reversed * 10 + num % 10;
		num = num / 10;
	}
	return reversed;
}
int check(int reversed, int num)
{
	if (num == reversed)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int num;
	printf("enter a number : \n");
	scanf("%d", &num);

	int reversed = reverse(num);
	if (check(reversed, num) == 1)
	{
		printf("the given number is palindrome");
	}
	else
	{
		printf("the given number is not palindrome");
	}

	return 0;
}