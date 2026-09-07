#include<stdio.h>
#define debug
#define pi 3
// ye pragma kya hai nahi pata hamko bus ek preprocess directive hai to give compiler special commands
#pragma message("Compiling Preprocessor Program")

int main(){
	
	#ifdef debug
	printf("debug is defined\n");
	#endif
	
	#undef debug
	
	#ifndef debug
	printf("debug is undefined\n");
	#endif
	
	#if pi==2
	printf("the value of pi is 2 \n");	
	#elif pi == 3
	printf("the value of pi is 3.14 \n");
	#else 
	printf("the value of pi is incorrect \n");
	#endif 
	
   printf("todays date is %s \n",__DATE__);
   printf("current time is %s \n",__TIME__);
   printf("the file name is %s \n",__FILE__);
   printf("the current line number is %d \n",__LINE__);
   printf("copiler is compliles with ANSI standard %d \n",__STDC__); 	
	
	return 0;
}