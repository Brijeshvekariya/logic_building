#include<stdio.h>
int main()
{
	int p;
	int r;
	int y;
	float si;
	printf("Enter Principle Amount : ");
	scanf("%d",&p);
	printf("Enter Rate of Interest : ");
	scanf("%d",&r);
	printf("Enter Time : ");
	scanf("%d",&y);
	si = (p*r*y)/100;
	printf("Simple Interest is : %.2f\n\n",si);
	printf("Total Amouunt Paid is : %.2f",p+si);

}