#include<stdio.h>
int main()
{
	int cell,d,n,sum=0,i;
	printf("1st number:");
	scanf("%d",&cell);
	printf("distance:");
	scanf("%d",&d);
	printf("position of number;");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+cell;
		cell=cell+d;
	}
		printf("result of AP series=%d",sum);
	return 0;
}

