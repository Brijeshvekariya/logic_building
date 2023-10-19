#include<stdio.h>
int main()
{
	int s1;
	int s2;
	int s3;
	int s4;
	int s5;
	float si;
	printf("Enter marks of 1 subject : ");
	scanf("%d",&s1);
	printf("Enter marks of 2 subject : ");
	scanf("%d",&s2);
	printf("Enter marks of 3 subject : ");
	scanf("%d",&s3);
	printf("Enter marks of 4 subject : ");
	scanf("%d",&s4);
	printf("Enter marks of 5 subject : ");
	scanf("%d",&s5);
	si = (s1+s2+s3+s4+s5)/5;
	printf("Percentage  is : %.2f\n\n",si);
//	printf("Total Salary is : %d\n\n",salary*12);
//	printf("Net Salary is : %.2f\n",(salary-si)*12);

}