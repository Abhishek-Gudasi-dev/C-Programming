#include<stdio.h>
int factorial(int num){
	int a=1;
	for(int i=1;i<=num;i++){
		a=a*i;
	}
	return a;
}
int main(){
	int num;
	printf("enter a number you want the factorial of :");
	scanf("%d",&num);
	int s=factorial(num);
	printf(" the factorial of %d is :%d",num,s);
	return 0;
}