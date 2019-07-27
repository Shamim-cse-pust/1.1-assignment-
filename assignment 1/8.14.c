#include<stdio.h>
int main()
{
	int s;
	float PI=3.14159,c,r,h,b,l,w,hy,t,rec;
	printf("press 1 for cirlcle ,  press 2 for rectangle , press 3 for triangle:");
	scanf("%d",&s);
	switch(s)
	{
		{
		case 1:
	printf("radius of circle:");
	scanf("%f",&r);
	c=2*PI*r;
	printf("perimeter of circle is =%f\n",c);
	break;
		}
		{
	case 2:
	printf("length of rectangle:");
	scanf("%f",&l);
	printf("width of rectangle:");
	scanf("%f",&w);
	rec=2*l+2*w;
		printf("perimeter of rectangle is =%f",rec);
		break;
		}
		{
		case 3:
	printf("base of triangle:");
	scanf("%f",&b);
	printf("hypotenuse of triangle:");
	scanf("%f",&hy);
	printf("vertical height of triangle:");
	scanf("%f",&h);
	t=h+b+hy;
	printf("perimeter of triangle is =%f\n",t);
	break;
		}
	}
	return 0;
}
