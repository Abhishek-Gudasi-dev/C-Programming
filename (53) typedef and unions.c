#include<stdio.h>

typedef union student{
	int id;
	int class;
	char name[32];
}std;

int main(){
	std s1,s2;
	s1.id=43;
	s1.class=5;// ek variable me ek hi member ka data store ho sakti hai aur multifle data store kiya tho sirf last me konsa kiye hote hai vahi store hota hai baki sab nahi.
	strcpy(s1.name,"elon_musk");
	s2.id=44;
	printf("%d\n",s1.id);
	printf("%s\n",s1.name);
	printf("%d\n",s2.id);
	return 0;
}