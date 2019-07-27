#include<stdio.h>
int main()
{
	int a,area,volume;
	printf("surface of cube:");
	scanf("%d",&a);
	volume=a*a*a;
	printf("volume of cube is=%d\n",volume);
	area=6*a*a;
	printf("surface area of cube is =%d",area);
	return 0;
}