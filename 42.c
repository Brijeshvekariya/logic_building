#include<stdio.h>
int main()
{
	float unit;
	float bill = 0;
	float total = 0;
	printf("Enter Your Unit : ");
	scanf("%f",&unit);
	if (unit>=50)
	{
		bill = (50*0.50);
		printf("\nbill for 50 unit is : %.2f\n",bill);
		total += bill;
		if (unit >=150)
		{
			bill = (100*0.75);
			printf("\nbill for next 100 unit is : %.2f\n",bill);
			total += bill;
			if (unit>=250)
			{
			bill = (100 *1.20);
			printf("\nbill for next 100 unit is : %.2f\n",bill);
			total += bill;
			unit -= 250;
			bill = (unit * 1.50);
			printf("\nbill for after 250 unit is : %.2f\n",bill);
			total += bill;
			
			printf("Total is : %.2f\n",total);
			}
			else
			{
				unit -=150;
				bill = (unit * 1.20);
				total += bill;
				printf("\nTotal bill is : %.2f\n",total);
				
			}
		}
		else
		{
			unit -= 50;
			bill = (unit*0.75);
			total += bill;
			printf("\nTotal bill : %.2f\n",total);
		}
		
	}

	else
	{
		bill = (unit*0.50);
		printf("\nbill is : %.2f\n",bill);
	}
	
	int dec = (total *20)/100;
	printf("\n\nTotal final bill is : %.2f\n",total + dec);
}