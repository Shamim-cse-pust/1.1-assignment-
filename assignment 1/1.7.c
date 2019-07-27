#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x,y,z,m,n;
    printf("enter the number : ");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0);
    {
        x=(-b+sqrt(d))/(2*a);
        y=(-b-sqrt(d))/(2*a);
        printf("x=%f and X=%f",x,y);
        exit(1);
    }
    if(d==0)
    {
        z=(-b)/(2*a);
        printf("x=%f",z);
        exit(1);
    }
    else
    {
        n=-b/(2*a);
        m=sqrt(-d)/(2*a);
        printf("%f+%fi and %f-%fi",n,m);
        exit(1);
    }
}
