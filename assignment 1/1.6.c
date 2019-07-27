#include<stdio.h>
int main()
{
	int n,m,r,sum=0,i;
	scanf("%d",&n);
	m=n;
	for(i=1;n>=1;i++)
	{
		r=n%10;
		n=n/10;
		sum=sum*10+r;
	}
	if(sum==m)
	{
		printf("%d is palindrome number",m);
	}
	else
	{
		printf("%d is not palindrome number",m);
	}
	return 0;
}