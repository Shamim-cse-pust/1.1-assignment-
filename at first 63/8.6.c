#include<stdio.h>
int main()
{
	int a,b,h;
	float area;
	printf("on arm of trapezium:");
	scanf("%d",&a);
	printf("down arm of trapezium:");
	scanf("%d",&b);
	printf("vertical height of trapezium:");
	scanf("%d",&h);
	area=0.5*(a+b)*h;
	printf("Area of trapezium is=%f",area);
	return 0;
}