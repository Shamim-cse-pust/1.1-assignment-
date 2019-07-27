#include<stdio.h>
int main()
{
	int i,n,r,n_fact=1,r_fact=1,fact=1,a,ncr;
    
	scanf("%d%d",&n,&r);
   a=(n-r);
	for(i=1;i<=n;i++)
	{
	n_fact=n_fact*i;
		
        }   
    for(i=1;i<=r;i++)
    {
   r_fact =r_fact*i; 
    }
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
        
    }
    
  ncr=n_fact/(r_fact*fact);
    printf("ncr=%d",ncr);
    
	return 0;
}