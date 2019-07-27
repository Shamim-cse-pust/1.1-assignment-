#include<stdio.h>
int main()
{
	float PI=3.14159,area;
	int r;
	printf("Radius of circle:");
	scanf("%d",&r);
	area=PI*r*r;
	printf("Area of circle is=%f",area);
	return 0;
}