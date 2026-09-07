#include<stdio.h>

int main(){
	int a=76;
	int *ptr=NULL;
	printf("null pointer %d\n",ptr);
	ptr=&a;
	printf(" the value of a is %d \n",a);
	printf("the value of a is %d\n",*ptr);
	printf("the address of a is %d\n",&a);
	printf("the address of a is %d\n",ptr);
	int arr[2]={10,20};
	printf("%d\n",*arr+20);
	printf("%d\n",*(arr+1)+20);// pointer arithmetic
	return 0;
}