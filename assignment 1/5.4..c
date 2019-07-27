#include<stdio.h>
int main()
{
	int i;
	char x[1000];
	printf("Enter the Octal Number : ");
	gets(x);
	printf("Binary Value = ");
	for(i=0;x[i]!=0;i++)
	{
		switch(x[i])
		{
			case '0' :
			    printf("000");
				break;
			case '1' :
			     printf("001");
				break;
			case '2' :
			    printf("010");
				break;
			case '3' :
			    printf("011");
				break;
			case '4' :
			     printf("100");
				break;
			case '5' :
			     printf("101");
				break;
			case '6' :
			    printf("110");
				break;
			case '7' :
			    printf("111");
				break;
			default :
			    printf("\nInvalid Octal Digit %c",x[i]);
				break;
		}

	}
}
