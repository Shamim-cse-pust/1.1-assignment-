#include<stdio.h>
int main()
{
	int radius,height;
	float PI=3.14159,area,volume;
	printf("radius of cylinder:");
	scanf("%d",&radius);
	printf("height of cylinder:");
	scanf("%d",&height);	area=2*PI*radius*radius+2*PI*radius*height;
	printf("surface area of cylinder is=%f\n",area);
	volume=PI*radius*radius*height;
	printf("volume of cylinder is =%f",volume);
	return 0;
}