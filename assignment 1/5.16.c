#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
    double ans,bin,frac,fun=0.0,a;
int sum=0,dec,i=0,rem,b,j=1;
printf("\nEnter the Binary number");
scanf("%lf",&bin);
dec=bin;
frac=bin-dec;
while(dec!=0)
{
rem=dec%10;
dec=dec/10;
sum=sum+(rem*pow(2,(i++)));
}
while(frac!=0.000)
{
a=10*frac;
b=a;
fun=fun+(b*(1/pow(2,(j++))));
frac=a-b;
}
ans=sum+fun;
printf("\nThe decimal equivalent is %lf",ans);
}
