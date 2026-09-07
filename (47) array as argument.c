#include<stdio.h>

int test(int* ptr){
	printf("the value is %d",ptr[3]);
	ptr[3]=64;
	return 0;
	
}

int main(){
	int arr[6]={1,2,3,4,5,6};
	 test(arr);
	 printf(" the value is  %d",arr[3]);
	return 0;
}