#include<stdio.h>
#include<string.h>

void parcer(char* html){
  int button=0,a=0;
  char parced[50];
  for(int i=0;i<50;i++){
    if(html[i]=='<'){
      button=0;
    }
    else if(html[i]=='>'){
      button=1;
    }
    else if(button==1){
    	parced[a]=html[i];
    	a++;
    }
  }
  int s=0;
  while(parced[s]==' '){
      for(int a=0;a<strlen(parced);a++){
    parced[a]=parced[a+1];
      }
    }
  
  int k=strlen(parced);
  
  while(parced[k-1]==' '){
  parced[k-1]='\0';
  k--;
  }

  printf("the parced string is :");
  for(int l=0;l<50;l++){
    printf("%c",parced[l]);
  }
}
int main(){
 char html[50]="<h1>       hello world  <h1>";
 //printf("enter the string :");
 //gets(html);
 parcer(html);
}