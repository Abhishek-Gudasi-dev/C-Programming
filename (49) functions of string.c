#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "abhi";
	char s2[] = "kriti";
	printf("combination of s1 and s2 is :");
	puts(strcat(s1, s2));
	printf("the length of s2 is %d\n", (strlen(s2)));
	char s3[53];
	strcpy(s3, s1);
	printf("the value of s3 is ");
	puts(s3);
	//	printf("%s",strrev(s1));
	//	puts(strrev(s1));
	printf("the comparison of s1 and s2 is %d\n", strcmp(s1, s2));
	//taking input
	char name[15];
	printf("please enter your name\n");
	gets(name);
	printf("the person name you love the most is : %s", name);
	return 0;
}