#include <stdio.h>

      int main ()
 { 
      
      int a;
      int s;
        
             printf("enter first number\n");
             scanf("%d",&a);
             
             printf("enter second number\n");
             scanf("%d",&s);
             
             
     if (a>s)  {
     	
     	    printf("%d is greater then %d",a,s);
     	
  }
     
     else if (s>a)   {
     	
     	    printf("%d is greater then %d",s,a);
     	    
  }
    
     else     {
     	
     	    printf ("both the numbers are equal");
     	    
  }
  
             return 0;
          
  }
     	