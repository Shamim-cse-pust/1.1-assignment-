#include<stdio.h>
int main()
{
	int height,width,area;
	printf("height of rectangle:");
	scanf("%d",&height);
	printf("width of rectangle:");
	scanf("%d",&width);
	area=width*height;
	printf("Area of rectangle is =%d",area);
	return 0;
}