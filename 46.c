#include<stdio.h>
int main()
{
	int row;
	int a,sum = 0;
	for (row=0;row<3;row++)
	{
		printf("Enter %d Number ",row+1);
		scanf("%d",&a);
		sum += a;
	}
	printf("Sum is : %d",sum);
}