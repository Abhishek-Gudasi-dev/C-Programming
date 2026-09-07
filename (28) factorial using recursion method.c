#include <stdio.h>
int factorial(int num){
if (num==0||num==1){
	return 1;
	}
	else{
		return num*factorial(num-1);
		}	
}

int main(){
	int num;
	printf("enter a number you want the factorial of :");
	scanf("%d",&num);
	int s=factorial(num);
	printf(" the factorial of %d is :%d",num,s);
	return 0;
}