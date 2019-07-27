#include<stdio.h>
int main()
{
	int a,b;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("a=%d\nb=%d ",a-(a-b),b+(a-b));
	return 0;
}