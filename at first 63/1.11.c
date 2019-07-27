#include<stdio.h>
int main()
{
	int n,i,j,k,v,x,y,z;
	scanf("%d",&n);
   for(i=0;i<n;i++)
	{
		v=1;
	for(j=1;j<=n-i;j++)
	{
		printf(" ");
	}
	for(k=0;k<=i;k++)
	{
		printf(" %d",v);
		v=v*(i-k)/(k+1);
	}
	printf("\n");
	}
	return 0;
}