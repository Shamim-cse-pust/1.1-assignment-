#include<stdio.h>
int main()
{
	int length,width,height,area,volume;
	printf("length of cuboids:");
	scanf("%d",&length);
	printf("width of cuboids:");
	scanf("%d",&width);
	printf("height of cuboids:");
	scanf("%d",&height);
	area=2*length*width+2*width*height+2*height*length;
	printf("surface area of cuboids is=%d\n",area);
	volume=length*width*height;
	printf("volume of cuboids is =%d",volume);
	return 0;
}