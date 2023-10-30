#include<stdio.h>
int main()
{
	int row;
	int a,e_sum = 0,o_sum = 0;
	for (row=0;row<5;row++)
	{
		printf("Enter %d Number ",row+1);
		scanf("%d",&a);
		if (a%2==0)
		{
			e_sum += a;
		}
		else
		{
			o_sum += a;
		}
	}
	printf("Even Sum is : %d\n",e_sum);
	printf("Odd Sum is : %d\n",o_sum);
}