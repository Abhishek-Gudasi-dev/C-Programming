#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


char selected[10];

char *choice(int a){	
	if(a==0){	
	strcpy(selected,"Rock");
	}
	else if (a==1){
		strcpy(selected,"Paper");
	}
	else {
		strcpy(selected,"Sessor");
	}
	return selected;
}


int main (){
	int user,computer;
    int usersc=0,computersc=0;
    srand(time(0));
	char *name =(char *)malloc(32*sizeof(char));
	printf("~~~welcome to Rock,Paper& sessor game~~~\n\n");
	printf("please enter your name :");
	scanf("%s",name);
	printf("***Instractions***\n enter 0. for Rock\n          1. for Paper\n          2. for Sessor\n");
	
	
	for(int i=1;i<=3;i++){
		printf("~~Round no %d~~\n",i);
    	printf("dear %s its your turn",name);
    	scanf("%d",&user);
        choice(user);
        printf("%s chose %s\n",name,selected);
        
        
        computer=rand()%3;
        choice(computer);
       printf("computer chose %s\n",selected); 
       
       if(user==0&&computer==2){
       	printf("%s won the round\n",name);
       	usersc++;
       	
       	
       }
       else if(user==1&&computer==0){
       	printf("%s won the round\n",name);
       	usersc++;
       	continue;
       }
       else if (user==2&&computer==1){
       	printf("%s won the round\n",name);
       	usersc++;
       	continue;
       }
       	else if( user==computer){
       		continue;
       	}
       	else {
       		printf(" computer won the round\n");
       		computersc++;
       	}
       	
       	
       
	   
	
	}
	if(usersc>computersc){
	printf("\n\n~~~%s won the match~~~",name);
	}
	else {
		printf("\n\n~~~computer won the match~~~");
	}
	return 0;
}