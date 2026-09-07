#include<stdio.h>

int main(){
	int num[5],sum=0;
	for(int i=0;i<5;i++){
		printf("enter the numbers you want to add\n");
		scanf("%d",&num[i]);
	}
	for(int a=0;a<5;a++){
	      sum=sum+num[a];
	}
	printf("the sum of all the numbers is %d\n",sum);
	return 0;
}