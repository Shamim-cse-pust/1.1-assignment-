#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	if((n==0)||(n==1))
	printf("%d is not prime and not prime\n",n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			printf("%d is not prime number\n",n);
			break;

		}
	}
		if(n==i)
		{
			printf("%d is prime number",n);
		}
		return 0;
}
