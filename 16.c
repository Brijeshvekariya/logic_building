#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter Farenhiet : ");
	scanf("%f",&f);
	c = f-32;
	printf("Farenhiet to Celsius is : %.2f",(c*5)/9);
}