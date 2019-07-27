#include<stdio.h>
int main()
{
	int i,n,r,sum=0;
	scanf("%d",&n);
	printf("digit of number\n");
	for(i=1;n>=1;i++)
	{
		r=n%10;
		printf("%d\n",r);
		n=n/10;
		}
		
return 0;
}