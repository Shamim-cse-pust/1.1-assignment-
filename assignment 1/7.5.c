#include<stdio.h>
int main()
{
	int cell,d,n,i,sum=1,result=0;
	printf("1st number:");
	scanf("%d",&cell);
	printf("position of number;");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   sum=cell*sum;
	result=result+sum;
	}
		printf("result of GP series=%d",result);
	return 0;
}
