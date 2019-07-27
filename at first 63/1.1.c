#include<stdio.h>
int main()
{
   int num,m,i,x=0,sum;
   scanf("%d",&num);
   m=num;
    for(i=1;i<num;i++)
    {
    	if(num%i==0)
    	{
            x=x+i;

    	}
    }
        if(x==m)
        {
        	printf("%d is perfect number",m);
        }
        else
        {
        printf("%d is not perfect number",m);
        }

    return 0;
}
