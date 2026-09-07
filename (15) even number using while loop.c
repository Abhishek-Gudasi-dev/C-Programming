#include<stdio.h>

int main(){
	int num;
	int index=2;
	printf("enter a number ");
	scanf("%d",&num);
	while(index<=num){
		printf("%d,",index);
		index=index+2;
	}
	return 0;
}