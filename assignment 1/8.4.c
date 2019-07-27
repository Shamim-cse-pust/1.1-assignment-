#include<stdio.h>
int main()
{
	int base,height;
	float area;
	printf("base of right angled triangle:");
	scanf("%d",&base);
	printf("height of right angled triangle:");
	scanf("%d",&height);
	area=0.5*base*height;
	printf("Area of right angled triangle is=%f",area);
	return 0;
}