#include <stdio.h>
// first large number find karo fir uss number ko ignore karte huve dusari baar largest number find karo vahi 2nd largest number hoga ..
int main()
{
int num[5], a = 0;
int c=0;
for (int i = 0, j = 1; i < 5; i++, j++)
{
printf("enter the number %d \n", j);
scanf("%d", &num[i]);
}

for (int b = 0; b < 5; b++)  
{  
	if (num[a] < num[b])  
	{  
		a = b;  
	}  
}  
  
for (int b = 0; b < 5; b++)  
{  
	if (b==a){  
		continue;  
	}  
else if (b!=a)  
	{  
		if (num[c] < num[b])  
		{  
			c=b;  
		}  
		  
	}  
}  

printf("the second largest number is %d \n", num[c]);  
return 0;

}