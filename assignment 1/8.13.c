#include<stdio.h>
int main()
{
	int radius;
	float PI=3.14159,area,volume;
	printf("radius of sphere:");
	scanf("%d",&radius);	area=4*PI*radius*radius;
	printf("surface area of sphere is=%f\n",area);	volume=1.333333*PI*radius*radius*radius;
	printf("volume of sphere is =%f",volume);
	return 0;
}