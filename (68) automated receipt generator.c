#include<stdio.h>
#include<string.h>
int main(){
	char name[34];
	char item[34];
	char outlet[34];
	FILE *ptr;
	printf("the name of customer :");
	gets(name);
	printf("the parchased item :");
	gets(item);
	printf("the outlet name :");
	gets(outlet);
	
	ptr=fopen("(68) automatic_receipt.txt","a");
	fprintf(ptr,"\n thanks %s for purchasing %s from our %s. \n please visite our outlete %s for any problems , we plan to serve you again soon ",name,item,outlet,outlet);
	fclose(ptr);
	return 0;
}