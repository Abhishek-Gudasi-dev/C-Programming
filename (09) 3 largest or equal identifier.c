#include <stdio.h>

  int main()
  {
  	
  	  int a;
  	  int b;
  	  int c;
  	  
  	           printf("enter first number");
  	           scanf("%d",&a);
  	           
  	           printf("enter second number");
  	           scanf("%d",&b);
  	           
  	           printf("enter third number");
  	           scanf("%d",&c);
  	           
  	  if (a>b && a>c && b!=c) {
  	  	      
  	  	      printf("%d is the greater number among all",a);
  	  	      
   }
       else if (b>a && b>c && c!=a)  {
        	   
        	       printf("%d is the greater number among all",b); 
        	      
   } 
       else  if (c>a &&  c>b && a!=b) {
        	       
        	       printf("%d is the greater number among all",c); 
        	      
   }
   
       else if (a==b) {
                    if (a>c){
        
                  printf("first number %d and second number %d are equal and greater then third number %d",a,b,c);}
                  else if (a<c) {
                  	
                  printf("first number %d and second number %d are equal and lesser then third number %d",a,b,c);}	
    }
        
        else if (a==c) {
                    if (a>b){
        
                  printf("first number %d and third number %d are equal and greater then second number %d",a,c,b);}
                  else if (a<b) {
                  	
                  printf("first number %d and third number %d are equal and lesser then second number %d",a,c,b);}	
    }
         else if (b==c) {
                    if (b>a){
        
                  printf("second number %d and third number %d are equal and greater then first number %d",b,c,a);}
                  else if (b<a) {
                  	
                  printf("second number %d and third number %d are equal and lesser then first number %d",b,c,a);}	
    }
    
           else if (a==b==c) {
           	printf("all the numbers are equal");}
           	
        return 0;
  }
        