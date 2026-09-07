#include <stdio.h>

int main()
{
	int a, b, c;
	FILE *ptr;
	ptr = fopen("(60) numbers.txt", "r");
	fscanf(ptr, "%d", &a);
	fscanf(ptr, "%d", &b);
	fscanf(ptr, "%d", &c);

	fclose(ptr);
	
	ptr = fopen("(60) numbers.txt", "a");
	fprintf(ptr, "\n%d", a + b + c);
	fclose(ptr);
	return 0;
}