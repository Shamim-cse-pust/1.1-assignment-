#include<stdio.h>
int main()
{
	int i,n,r,sum=0,j=0;
	char x[100];
	printf("decimal number is:");

	scanf("%d",&n);

	for(i=1;n!=0;i++)
	{

		r=n%16;
		if(r<10)
        {
            x[j++]=48+r;
        }
        else
        {
            x[j++]=55+r;
        }
		n=n/16;
		}
     printf("hexadecimal number is : ");
		for(i=j-1;i>=0;i--)
        {
            printf("%c",x[i]);
        }
return 0;
}
