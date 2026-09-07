#include<stdio.h>

void change(int*a,int*b){
	int c=*a;
	*a=*a+*b;
	*b=c-*b;

	
}

int main (){
	int a=4,b=2;
	change(&a,&b);
	printf("the value of a is %d\nthe value of b is %d",a,b);
	return 0;
}