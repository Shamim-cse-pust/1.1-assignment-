#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a-b>0 && a-c>0)
    {
        printf("%d is biggest number ",a);
    }
    else if(b-c>0)
    {
        printf("%d is bigest number ",b);
    }
    else
    {
        printf("%d is bigest number",c);
    }
    return 0;
}
