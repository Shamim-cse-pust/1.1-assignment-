#include<stdio.h>
int main()
{
	int n,i,fact=1,rem,j,m,sum=0;
	scanf("%d",&n);
	m=n;
   for(i=1;n>0;i++)
	{
		rem=n%10;
		for(j=1;j<=rem;j++)
		{
			fact=fact*j;
		}
		sum=sum+fact;
		n=n/10;
		fact=1;
	}
		if(m==sum)
			{
			printf("%d is strong number",m);
			}
			else
			{
			printf("%d is not strong number",m);
			}
				return 0;
				}