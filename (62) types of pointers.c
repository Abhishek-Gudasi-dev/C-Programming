#include<stdio.h>
int* func(){
	int a=4;
	return &a;
}
int main(){
	void *ptr; // void pointer
	(int *)ptr; // wild pointer
	ptr=NULL; // null pointer
	ptr=func();// dangling pointer
	printf("the adress of a is %d",ptr);
	return 0;
}