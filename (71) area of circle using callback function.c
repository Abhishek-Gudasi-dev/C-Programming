#include <stdio.h>
#include <math.h>
#define PI 3.14
#define squr(r) ((r) * (r))

float distance(int x1, int y1, int x2, int y2)
{
	return sqrt(squr(x2 - x1) + squr(y2 - y1));// aise bhi likh sakte hai (x2-x1)^2 ......
}

void area_of_circle(float (*func)(int, int, int, int), int x1, int y1, int x2, int y2)
{
	printf("the area of circle is %f", PI * squr(func(x1, y1, x2, y2)));
}

int main()
{
	int x1, x2, y1, y2;
	printf("enter the values of x1 and y1\n");
	scanf("%d%d", &x1, &y1);
	printf("enter the values of x2 and y2\n");
	scanf("%d%d", &x2, &y2);
	area_of_circle(distance, x1, y1, x2, y2);
	return 0;
}