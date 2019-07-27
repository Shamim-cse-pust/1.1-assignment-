#include<stdio.h>
int main()
{
	int n,i,j=1,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
			for(k=1;k<=i;k++)
			{
			
				printf(" %d",j++);
				}
			
				printf("\n");
				}
				return 0;
				}