#include <stdio.h>

// cms to inches
void cmin(float num)
{
printf("%f centimeters is equal to %.2f inches", num, num/2.54);
}

// inches to meters
void inme(float num)
{
printf("%f inches is equal to %.2f meters", num, num*0.0254);
}

//inches to feet
void inft(float num)
{
printf("%f inches is equal to %.2f feet", num, num/12);
}

//kms to miles
void kmmi(float num)
{
printf("%f kilo meters is equal to %.2f miles", num, num*0.621);
}

//pounds to kgs
void pokg(float num)
{
printf("%f pounds is equal to %.2f kilo grams", num, num*0.453);
}

int main()
{
int func;
float num;
printf("1. cms to inches \n2. inches to meters \n3.inches to feet \n4.kms to miles \n5.pounds to kgs  \n");
scanf("%d", &func);
printf("enter the number\n");
scanf("%f", &num);
if (func == 1)
{
cmin(num);
}
else if (func == 2)
{
inme(num);
}
else if (func == 3)
{
inft(num);
}
else if (func == 4)
{
kmmi(num);
}
else if (func == 5)
{
pokg(num);
}
else
{
printf("please enter a valid function number\n");
}

return 0;

}