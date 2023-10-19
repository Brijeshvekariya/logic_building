#include<stdio.h>
int main()
{
	int salary;
	float si;
	printf("Enter Salary Amount : ");
	scanf("%d",&salary);
	si = (salary*20)/100;
	printf("Total insurance  is : %.2f\n\n",si*12);
	printf("Total Salary is : %d\n\n",salary*12);
	printf("Net Salary is : %.2f\n",(salary-si)*12);

}