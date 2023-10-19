//accept 5 expense from user find average

#include<stdio.h>
int main()
{
	int s1;
	int s2;
	int s3;
	int s4;
	int s5;
	float si;
	printf("Enter Expense of 1 Employee : ");
	scanf("%d",&s1);
	printf("Enter Expense of 2 Employee : ");
	scanf("%d",&s2);
	printf("Enter Expense of 3 Employee : ");
	scanf("%d",&s3);
	printf("Enter Expense of 4 Employee : ");
	scanf("%d",&s4);
	printf("Enter Expense of 5 Employee : ");
	scanf("%d",&s5);
	si = (s1+s2+s3+s4+s5)/5;
	
	printf("\n\nThe Total Expense is : %.2f\n\n",salary);
	printf("The average of Total Expense is : %.2f",salary/5);
}
