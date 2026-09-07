#include<stdio.h>
int add(int a, int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
	}
	int multi(int a,int b){
		return a*b;
		}
		int div(int a, int b){
			return a/b;
			}
			void exicute(int (*operation)(int ,int),int a,int b){
				printf("the result is %d \n",operation(a,b));
				} 
int main(){
	int a=5;
	int b=5;
	int(*operation)(int,int);
	operation=add;
	exicute(operation,a,b);
	exicute(sub,a,b);
	exicute(multi,a,b);
	exicute(div,a,b);
	
	return 0;
}
	