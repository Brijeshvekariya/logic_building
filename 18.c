#include<stdio.h>
int main()
{
	float d,m,y;
	printf("Enter Years : ");
	scanf("%f",&y);
	m = y*12;
	d = y*365;
	printf("Month is : %.2f Months\n\n",m);
	printf("Days is : %.2f Days",d);
}


