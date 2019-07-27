#include<stdio.h>
int main()
{
	int base,height;
	float area;
	printf("base of triangle:");
	scanf("%d",&base);
	printf("height of triangle:");
	scanf("%d",&height);
	area=0.5*base*height;
	printf("Area of triangle is=%f",area);
	return 0;
}