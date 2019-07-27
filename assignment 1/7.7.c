#include<stdio.h>
int main()
{
	int n,i,sum=1,p=1;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		p=p*2;
	sum=sum+p;
	}
	printf("sum= %d\n",sum);
	return 0;
}
