#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
int a;	
srand(time(0));
	for(int i=0;i<10;i++){
		
		printf(" the random number %d is  : %d\n",i,rand()%5);
		
	}
		return 0;
	}