#include<stdio.h>
int main()
{
	int row;
	int a,sum = 0;
	for (row=0;row<5;row++)
	{
		printf("Enter %d Number ",row+1);
		scanf("%d",&a);
		if (a%2==0)
		{
			printf("%d is even\n",a);
		}
		else
		{
			printf("%d is Odd\n",a);
		}
		sum += a;
	}
	printf("Sum is : %d",sum);
}