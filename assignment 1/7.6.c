#include<stdio.h>
int main()
{
	int d,n,i;
	float cell,sum;
	printf("1st number:");
	scanf("%f",&cell);
	printf("distance:");
	scanf("%d",&d);
	printf("position of number;");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(1/cell);
		cell=cell+d;
	}
		printf("result of G.P series=%f",sum);
	return 0;
}