#include<stdio.h>    
int main()    
{    
 int n,n1=0,n2=1,sum,i;    
 printf("Enter the number of elements:");    
 scanf("%d",&n);    
 printf("%d %d",n1,n2); 
 for(i=3;i<=n;i++)
 {    
  sum=n1+n2;    
  printf(" %d",sum);    
  n1=n2;    
  n2=sum;    
 }  
  return 0;  
 }    