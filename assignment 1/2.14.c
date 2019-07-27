#include<stdio.h>
int main()
{
    int x[100],n,i;
    printf("total number :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d number is=",i+1);
        scanf("%d",&x[i]);
    }

    int max=x[0];
    for(i=1;i<n;i++)
    {
        if(max<x[i])
        max=x[i];
    }
    printf("large number is %d",max);

    return 0;
}

