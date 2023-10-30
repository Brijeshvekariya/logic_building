#include<stdio.h>
int main()
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	for (int row=0;row<11;row++)
	{
		printf("%d * %d = %d\n",n,row,n*row);
	}
	
}