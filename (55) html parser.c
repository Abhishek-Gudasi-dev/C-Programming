#include <stdio.h>
#include <string.h>

void parcer(char *string)
{
	int start=0;
	int index = 0;
	//<h1>       This is head line     </h1>
	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i] == '<')
		{
			start = 0;
			continue;
		}
		else if (string[i] == '>')
		{
			start = 1;
			continue;
		}
		else if (start == 1)
		{
			string[index] = string[i];
			//	printf("%c", string[index]);
			index++;
		}

		/*	else if(start==1){
		if(string[i] ==' '){
			continue;}
			else{
				printf("%c",string[i]);
				continue;
			}*/
	}
	string[index] = '\0';
	int j = 0;

		while (string[j] == ' ')
		{
			for (int a=0; a < strlen(string); a++)
			{
				string[a] = string[a + 1];
				
				
			}
			
		}
		while (string[strlen(string)-1] == ' ')
		{
			
				string[strlen(string)-1]='\0';
				
			
			
		}
		
			for (int i=0;i<strlen(string);i++){
		printf("%c",string[i]);
	} 
}
	int main()
	{
		char string[50] = " <h1>      This is head line     </h1>";
		parcer(string);
	
		return 0;
	}