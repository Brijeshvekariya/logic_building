#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter 1 num : ");
	scanf("%d",&n1);
	printf("Enter 2 num : ");
	scanf("%d",&n2);
	if (n1>=n2)
	{
		printf("%d is Greater than %d",n1,n2);
	}
	else
	{
		printf("%d is Greater than %d",n2,n1);
		
	}
}