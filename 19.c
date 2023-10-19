#include<stdio.h>
int main()
{
	float h,m,s;
	printf("Enter Minutes : ");
	scanf("%f",&m);
	s = m*60;
	h = m/60;
	printf("Second is : %.2f Seconds\n\n",s);
	printf("Hours is : %.2f Hours",h);
}


