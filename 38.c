
#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter Number 1 : ");
	scanf("%d",&n1);
	printf("Enter Number 2 : ");
	scanf("%d",&n2);
	int min = n1<n2 ? n1:n2;
	printf("Minimun is : %d\n",min);
}