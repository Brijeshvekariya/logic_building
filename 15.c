#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter Celsius : ");
	scanf("%f",&c);
	f = (c*9)/5;
	printf("Celsius to Farenheit is : %.2f",f+32);
}