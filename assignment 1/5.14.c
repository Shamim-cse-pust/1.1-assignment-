#include<stdio.h>
int binary(int x,int y)
{
     int i=0,r= 0,sum[100];
    int sum1=0;
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
        while(i>=0)
            sum1=sum1*10+sum[i--];
        return sum1;

}
int main()
{
    int x,y,mul=0;
    int digit,factor=1;
    printf("Enter any first binary number: ");
    scanf("%d",&x);
    printf("Enter any second binary number: ");
    scanf("%d",&y);

    while(y!=0){
         digit =  y %10;

         if(digit ==1){
                 x=x*factor;
                 mul = binary(x,mul);
         }
         else
        x=x*factor;

         y= y/10;
         factor = 10;
    }

    printf("multiplication  of two binary numbers: %ld",mul);

   return 0;
}
