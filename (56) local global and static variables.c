#include<stdio.h>
int a=5;// global variable , can be access every where in program 
int main(){
	int b=6;// local variable , only valid in main function
	printf("the value of a is %d\n",a);
	printf("the value of b is %d\n",b);
	for(int i=0;i<20;i++){
		static int s=0;// sirf first time initialize hota hai , aur throught program last value stored hota hai 
		printf("the value of s is %d\n",s);
		s++;
	} 
	return 0;
}