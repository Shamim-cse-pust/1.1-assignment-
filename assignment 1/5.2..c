#include<stdio.h>
int main()
{
	int i,n,r,sum=0,p,q;
	printf("decimal number is:");

	scanf("%d",&n);
    q=n;
    for(i=1;q>=1;i++)
    {
        p=q%10;
        q=q/10;
        if(p>7)
        {
            printf("%d has no octal number",n);
            exit(1);
        }
    }
	for(i=1;n>=1;i=i*10)
	{



		r=n%8;
		n=n/8;
		sum=sum+r*i;
		}

		printf("octal number is:%d",sum);

return 0;
}

