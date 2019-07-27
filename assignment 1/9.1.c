#include <stdio.h>

int main() {
	int t,i,j,x,m,n;
	scanf("%d",&n);
	int a[1000] = {0};

	a[0] = 1;
	m = 1;

	t= 0;
	for(i=1;i<=n;i++) {
		for(j=0;j<m;j++) {
			x=a[j]*i+t;
			a[j]=x%10;
			t=x/10;
		}
		while(t>0) {
			a[m]=t%10;
			t=t/10;
			m++;
		}
	}

	for(i=m-1;i>=0;i--)
		printf("%d",a[i]);


	return 0;
}
