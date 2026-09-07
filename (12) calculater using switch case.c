#include<stdio.h>

int main(){
	int a,s,choice;
	printf("enter the numbers :");
	scanf("%d%d",&a,&s);
	printf("enter 1.addition\n         2.substraction\n         3.multiflication\n        4.division\n");
	scanf("%d",&choice);
	
	switch(choice){
		case(1):
			printf("the addition of numbers %d and %d is : %d",a,s,a+s);
			break;
		case(2):
		printf("the substraction of numbers %d and %d is : %d",a,s,a-s);
		break;
		case(3):
		printf("the multiflication of numbers %d and %d is : %d",a,s,a*s);
		break;
		case(4):
		printf("the multiflication of numbers %d and %d is : %d",a,s,a/s);
		break;
	}
	return 0;
}