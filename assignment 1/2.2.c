#include<stdio.h>
int main()
{
	int i,n,r,sum=0;
	scanf("%d",&n);
	for(i=1;n>=1;i++)
	{
		r=n%10;
		
		n=n/10;
		sum=sum+r;
		}
		
		printf("the sum is %d\n",sum);
return 0;
}