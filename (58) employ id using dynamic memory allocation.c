#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *ptr;
	int n;
	

	printf("enter the length of employe id : \n");
	scanf("%d", &n);
	ptr = (char *) malloc(n*sizeof(char));
	printf("enter your employe id \n");
	scanf("%s",ptr);
	printf("your employe id is %s\n\n", ptr);

	printf("enter the length of employe id : \n");
	scanf("%d", &n);
	ptr = (char *)realloc(ptr, n * sizeof(char));
	printf("enter your employe id \n");
	scanf("%s", ptr);
	printf("your employe id is %s\n\n", ptr);
	
	
	printf("enter the length of employe id : \n");
	scanf("%d", &n);
	ptr = (char *)realloc(ptr, n * sizeof(char));
	printf("enter your employe id \n");
	scanf("%s", ptr);
	printf("your employe id is %s\n\n", ptr);
	return 0;
}