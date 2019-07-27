#include<stdio.h>
int main()
{
	int n,i,j,r,v,m,base=16,sum,sum1=0,r1,sum2=0;
	printf("hexadecimal number is:");
	scanf("%d",&n);
	m=n;
	for(i=0;n>=1;i++)
	{
		v=0;
		r=n%10;
		n=n/10;
		for(j=1;j<=i;j++)
		{
			v=v+r*base;
		}
			sum=v+(m%10);
		
	}
	if(sum%8!=0)
	{
	for(i=1;sum>=1;i++)
	{
		r=sum%8;
		sum=sum/8;
		sum1=sum1*10+r;
		}
		for(i=1;sum1>=1;i++)
		{
			r1=sum1%10;
			sum1=sum1/10;
			sum2=sum2*10+r1;
		}
		printf("octal number is:%d",sum2);
	}
	else
	printf("dont show octal number by this process");
return 0;
}