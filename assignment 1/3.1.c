#include<stdio.h>
int main()
{
	int sum=1,x,y,i;
	scanf("%d%d",&x,&y);
	for(i=1;i<=x;i++)
	{
		
		
		if((x%i==0)&&(y%i==0))
		{
			sum=sum*i;
			x=x/i;
			y=y/i;
		i=1;
		}
	}
	printf("LCM=%d",sum*x*y);
	return 0;
}