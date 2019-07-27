#include<stdio.h>
int main()
{
	int n,i,j,r,v,m,base=8,sum;
	printf("octal number is:");
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
	printf("decimal number is:%d",sum);
return 0;
}