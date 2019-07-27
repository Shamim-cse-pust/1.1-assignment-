#include<stdio.h>
int main()
{
    char x[100];
    int n=0,i;
    printf("enter the string : ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        n=n*10+(x[i]-'0');
    }
    printf("integer = %d",n);
}
