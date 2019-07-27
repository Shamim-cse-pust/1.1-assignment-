#include<stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	sum=sum+i*i*i;
	}
	printf("1^3+.....+%d^3= %d",n,sum);
	return 0;
}