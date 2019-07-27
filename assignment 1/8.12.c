#include<stdio.h>
int main()
{
	int radius,slant,height;
	float PI=3.14159,area,volume;
	printf("radius of cone:");
	scanf("%d",&radius);
	printf("height of cone:");
	scanf("%d",&height);
	printf("slant of cone:");
	scanf("%d",&slant);	area=PI*radius*radius+PI*radius*slant;
	printf("surface area of cone is=%f\n",area);
	volume=0.333333*PI*radius*radius*height;
	printf("volume of cone is =%f",volume);
	return 0;
}