#include <stdio.h>
// <h1>Hello</h1>

int main()
{
	char html[50];
	printf("enter the html parcer");
	scanf("%s", html);
	for (int i = 0; i < 50; i++)
	{
		if (html[i] == '>')
		{
			for (i = i + 1; i < 50; i++)
			{
				if (html[i] != '<')
				{
					printf("%c", html[i]);
				}
				else
				{
					goto end;
				}
			}
		}
	}
end:

	return 0;
}