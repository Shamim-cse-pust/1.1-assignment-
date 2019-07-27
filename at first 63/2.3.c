#include<stdio.h>
int main()
{
   int x,y,i,sum=1;
   scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
    	sum=sum*x;
        }
        printf("power of number is %d",sum);
    return 0;
}