#include <stdio.h>
#include <string.h>

struct driver
{
	char name[33];
	char driving_license[33];
	char route[33];
	int kms;
};
void printdetails(struct driver d){
	printf("\ndetails of driver\n");
	printf("Name :%s\n",d.name);
	printf("Driving license :%s\n",d.driving_license);
    printf("route :%s\n",d.route);
    printf("kms drived :%d\n\n",d.kms);
}
int main()
{
	char garbege[44];
	struct driver d[3];
	for (int i = 0; i < 3; i++)
	{
		printf("The information form for driver%d\n", i + 1);
		printf("enter your name :");
		gets(d[i].name);
		printf("enter your driving license number :");
		gets(d[i].driving_license);
		printf("enter your route :");
		gets(d[i].route);
		printf("enter how much kms you have drived :");
		scanf("%d", &d[i].kms);
		gets(garbege);
	
	}
	for (int j=0;j<3;j++){
	printdetails(d[j]);
	}

	return 0;
}
