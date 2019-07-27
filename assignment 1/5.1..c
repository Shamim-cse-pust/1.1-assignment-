#include<stdio.h>
int main()
{
	int i,n,r,sum=0,sum1=0,r1;
	printf("decimal number is:");
	scanf("%d",&n);

	for(i=1;n>=1;i=i*10)
	{
		r=n%2;
		n=n/2;
		sum=sum+r*i;

		}

		printf("binary number is:%d",sum);
	return 0;
}
