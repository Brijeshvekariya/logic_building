#include<stdio.h>
int main()
{
	char e1[20];
	char e2[20];
	char e3[20];
	char e4[20];
	char e5[20];
	int s1;
	int s2;
	int s3;
	int s4;
	int s5;
	float salary;
	printf("Enter Name of 1 Employee : ");
	scanf("%s",e1);
	printf("Enter Salary of 1 Employee : ");
	scanf("%d",&s1);
	printf("Enter Name of 2 Employee : ");
	scanf("%s",e2);
	printf("Enter Salary of 2 Employee : ");
	scanf("%d",&s2);
	printf("Enter Name of 3 Employee : ");
	scanf("%s",e3);
	printf("Enter Salary of 3 Employee : ");
	scanf("%d",&s3);
	printf("Enter Name of 4 Employee : ");
	scanf("%s",e4);
	printf("Enter Salary of 4 Employee : ");
	scanf("%d",&s4);
	printf("Enter Name of 5 Employee : ");
	scanf("%s",e5);
	printf("Enter Salary of 5 Employee : ");
	scanf("%d",&s5);
	salary = (s1+s2+s3+s4+s5);
	printf("\n\nThe Total salary is : %.2f\n\n",salary);
	printf("The average of Total salary is : %.2f",salary/5);
}