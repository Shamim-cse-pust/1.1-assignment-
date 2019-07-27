#include<stdio.h>
int main()
{
    int x,y,n,m,i,j,sum[100],r=0;
    printf("1st binary number : ");
    scanf("%d",&x);
    printf("2nd binary number : ");
    scanf("%d",&y);
    for(i=0;x!=0 || y!=0 ;i++)
    {
        sum[i]=(x%10+y%10+r)%2;
        r=(x%10+y%10+r)/2;
        x=x/10;
        y=y/10;
    }
    if(r!=0)
    {
        sum[i++]=r;
    }
        i--;
        printf("sum of two binary number : ");
        while(i>=0)
            printf("%d",sum[i--]);
        return 0;

}
