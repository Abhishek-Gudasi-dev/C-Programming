#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr1=NULL,a,s;
	char *ptr2=NULL;
	ptr1=(int *) malloc(sizeof(int));
	ptr2=(char *) calloc(1,sizeof(char));
	printf(" enter an integer and a charecter :");
	scanf("%d %c",ptr1,ptr2);
	printf(" you have entered %d and %c \n ",*ptr1,*ptr2);
	printf(" how many integers and characters you want to enter");
	scanf("%d%d",&a,&s);
	ptr1=(int*)realloc(ptr1,a*sizeof(int));
	ptr2=(char*)realloc(ptr2,s*sizeof(char));
	printf(" enter an integer :");
	for(int i=0;i<a;i++){
	scanf("%d",&ptr1[i]);
	}
	for(int j=0;j<a;j++){
		printf("%d",ptr1[j]);
	}
	printf("enter a character");
	for(int i=0;i<s;i++){
	scanf(" %c",&ptr2[i]);
	}
	for(int j=0;j<s;j++){
		printf("%c",ptr2[j]);
	}
	free(ptr1);
	free(ptr2);
	return 0;
}