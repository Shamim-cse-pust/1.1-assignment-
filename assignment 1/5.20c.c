#include <stdio.h>
int main()
{
    int n, num = 0,r,m,i;
    printf("Enter any number to print in words: ");
    scanf("%d", &n);
    m=n;
    while(n != 0)
    {
        r=n%10;
        num = (num * 10) + r;
        n =n/10;
    }
    while(num != 0)
    {
        switch(num % 10)
        {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }

        num = num / 10;
    }
    for(i=0;m!=0;i++)
    {
        r=m%10;
        m=m/10;
        if(r==0)
        {
            printf("zero ");
        }
    }

    return 0;
}

