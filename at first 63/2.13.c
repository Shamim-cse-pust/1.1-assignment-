#include<stdio.h>
int main()
{
	int a,b,c;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	c=a-b;
	printf("a=%d\nb=%d ",a-c,b+c);
	return 0;
}