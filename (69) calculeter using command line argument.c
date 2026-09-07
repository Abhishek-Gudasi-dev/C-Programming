#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	int a=atoi(argv[2]);
	int b= atoi(argv[3]);
	if(strcmp(argv[1],"add")==0){
	printf("the sum is %d",a+b);
	}
else if(strcmp(argv[1],"sub")==0){
	printf("the diffrence is %d",a-b);
	}
else if(strcmp(argv[1],"multi")==0){
	printf("the multiflication is %d",a*b);
	}
	else if (strcmp(argv[1],"div")==0){
	printf("the division is %d",a/b);
	}
	else{
		printf("invalid command");
	}
		return 0;
}