#include<stdio.h>
int main()
{
	int i,n,r,sum=0,sum1=0,r1;
	printf("decimal number is:");
	scanf("%d",&n);
	if(n%8!=0)
	{
	for(i=1;n>=1;i++)
	{
		r=n%8;
		n=n/8;
		sum=sum*10+r;
		}
		for(i=1;sum>=1;i++)
		{
			r1=sum%10;
			sum=sum/10;
			sum1=sum1*10+r1;
		}
		printf("octal number is:%d",sum1);
	}
	else
	printf("dont show octal number by this process");
return 0;
}