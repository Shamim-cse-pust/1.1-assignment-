#include<stdio.h>
int main()
{
		int n,i,j,k,m,p,r,sum=1,r1,sum1=0;
	scanf("%d",&n);
	m=n;
	p=n;

	for(i=0;n>=1;i++)
	{
	r=n%10;
	n=n/10;
}
for(j=1;p>=1;j++)
{
	sum=1;
	r1=p%10;
	p=p/10;
	for(k=1;k<=i;k++)
	{
		sum=sum*r1;
	}
	sum1=sum1+sum;
}
	if(m==sum1)
	{
		printf("%d is armstrong number",m);
	}
	else
	{
		printf("%d is not armstrong number",m);
	}
return 0;
}
