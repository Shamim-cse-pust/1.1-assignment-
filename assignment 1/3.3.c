#include<stdio.h>
int main()
{
	int x,y,i,gcd=1;
	scanf("%d%d",&x,&y);
	for(i=1;i<=x;i++)
	{
		
		
		if((x%i==0)&&(y%i==0))
		{
			gcd=gcd*i;
			x=x/i;
			y=y/i;
		i=1;
		}
	}
	printf("GCD=%d",gcd);
	return 0;
}