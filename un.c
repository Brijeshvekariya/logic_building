#include<stdio.h>
int main()
{
	int salary,hra,da;
	printf("Enter Your Salary : ");
	scanf("%d",&salary);
	if (salary>0 && salary <=10000)
	{
		hra = (salary*20)/100;
		da = (salary*80)/100;
		printf("\nHRA is : %d\n",hra);
		printf("\nDA is : %d\n",da);
		printf("\nGross salary is : %d\n",salary + da + hra);
		printf("Per annum salary : %d\n",(salary + da+ hra)*12);
	}
	else if (salary >10000 && salary <= 20000)
	{
		hra = (salary*25)/100;
		da = (salary*90)/100;
		printf("\nHRA is : %d\n",hra);
		printf("\nDA is : %d\n",da);
		printf("\nGross salary is : %d\n",salary + da + hra);
		printf("Per annum salary : %d\n",(salary + da+ hra)*12);
	}
	else if (salary > 20000)
	{
		hra = (salary*30)/100;
		da = (salary*95)/100;
		printf("\nHRA is : %d\n",hra);
		printf("\nDA is : %d\n",da);
		printf("\nGross salary is : %d\n",salary + da + hra);
		printf("Per annum salary : %d\n",(salary + da+ hra)*12);
		
	}
	else
	{
		printf("Enter valid salary");
	}
}