 #include<stdio.h>
int main()
{
	int t,t1,s;
	float kg,gram,pound,m,cm,ft;
	printf("press 1 for SI to CGS\npress 2 for SI to Ft/P\npress 3 for CGS to SI\npress 4 for CGS to Ft/P\npress 5 for Ft/P to SI\npress 6 for Ft/P to CGS\n :");
	scanf("%d",&s);
	switch(s)
	{
		{
		case 1:
		printf("SI to CGS\n");
	printf("kg:");
	scanf("%f",&kg);
	gram=kg*1000;
	printf("%f kg = %f gram\n",kg,gram);
	printf("meters:");
	scanf("%f",&m);
		cm=m*100;
	printf("%f m = %f cm\n",m,cm);
	printf("second:");
	scanf("%d",&t);
	t1=t*1;
	printf("%d s= %d s\n",t,t1);
	break;
		}
		{
			case 2:
			printf("SI to Ft/p\n");
			printf("kg:");
	scanf("%f",&kg);
	pound=kg*2.2046;
	printf("%f kg = %f pound\n",kg,pound);
	printf("meters:");
	scanf("%f",&m);
		ft=m*3.281;
	printf("%f m = %f ft\n",m,ft);
	printf("second:");
	scanf("%d",&t);
	t1=t*1;
	printf("%d s= %d s\n",t,t1);
	break;
		}
		{
			case 3:
			printf("CGS to SI\n");
			printf("gram:");
	scanf("%f",&gram);
	kg=gram*0.001;
	printf("%f gram= %f kg\n",gram,kg);
	printf("centimeters:");
	scanf("%f",&cm);
		m=0.01*cm;
	printf("%f cm = %f m\n",cm,m);
	printf("second:");
	scanf("%d",&t);
	t1=t*1;
	printf("%d s= %d s\n",t,t1);
	break;
		}
		{
			case 4:
                printf("CGS to ft/p\n");
                printf("gram:");
                scanf("%f",&gram);
                pound=gram*0.002205;
                printf("%f gram= %f pound\n",gram,pound);
                printf("centimeters:");
                scanf("%f",&cm);

                ft=0.033*cm;

                printf("%f cm = %f ft\n",cm,ft);
                printf("second:");
                scanf("%d",&t);
                t1=t*1;
                printf("%d s= %d s\n",t,t1);
                break;
                }
                {
			case 5:
			printf("Ft/P to SI\n");
			printf("pound:");
	scanf("%f",&pound);
	kg=pound*0.4536;
	printf("%f pound= %f kg\n",pound,kg);
	printf("ft:");
	scanf("%f",&ft);
		m=ft*0.3048;
	printf("%f ft= %f m\n",ft,m);
	printf("second:");
	scanf("%d",&t);
	t1=t*1;
	printf("%d s= %d s\n",t,t1);
	break;
		}
			{
			case 6:
			printf("Ft/P to CGS\n");
			printf("pound:");
	scanf("%f",&pound);
	gram=pound*453.59;
	printf("%f pound= %f gram\n",pound,gram);
	printf("ft:");
	scanf("%f",&ft);
		cm=ft*30.48;
	printf("%f ft= %f cm\n",ft,cm);
	printf("second:");
	scanf("%d",&t);
	t1=t*1;
	printf("%d s= %d s\n",t,t1);
	break;
		}
		}
	return 0;
}
