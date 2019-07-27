#include <stdio.h>
int main()
{
int binary, decimal= 0, j = 1, r,p,q,i;
    printf("Enter the value for  binary number: ");
    scanf("%d", &binary);
    p=binary;
    for(i=1;p!=0;i++)
    {
        q=p%10;
        p=p/10;
        if(q>1)
        {
            printf("decimal number impossible ");
            exit(1);
        }
    }
 for(j=1;binary!=0;j=j*2)
    {
        r = binary % 10;
        decimal =decimal +r*j;
        binary = binary / 10;
    }
    printf("Equivalent decimal value: %d",decimal);
    return 0;
}

