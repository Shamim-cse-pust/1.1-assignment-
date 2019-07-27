#include<stdio.h>
int main()
{
	int i,n,r,sum=0;
	printf("decimal number is:");
	scanf("%d",&n);
	for(i=1;n>=1;i=i*10)
	{
		r=n%16;

		n=n/16;
		sum=sum+r*i;
		}
		printf("hexadecimal number is:%d",sum);

return 0;
}
