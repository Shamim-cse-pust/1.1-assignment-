#include<stdio.h>
int main()
{
	int i,n,r,sum=0,sum1=0,r1;
	printf("decimal number is:");
	scanf("%d",&n);
	if(n%2==1)
	{
	for(i=1;n>=1;i++)
	{
		r=n%2;
		n=n/2;
		sum=sum*10+r;
		}
		for(i=1;sum>=1;i++)
		{
			r1=sum%10;
			sum=sum/10;
			sum1=sum1*10+r1;
		}
		printf("binary number is:%d",sum1);
	}
	else
	printf("dont show binary number by this process");
return 0;
}