#include<stdio.h>
int main()
{
	int diagonal1,diagonal2;
	float area;
	printf("diagonal1 of rhombus:");
	scanf("%d",&diagonal1);
	printf("diagonal2 of rhombus:");
	scanf("%d",&diagonal2);
	area=0.5*diagonal1*diagonal2;
	printf("Area of rhombus is=%f",area);
	return 0;
}