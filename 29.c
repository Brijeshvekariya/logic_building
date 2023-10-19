#include<stdio.h>
int main()
{
	int n;
	printf("Enter  : ");
	scanf("%d",&n);
	printf("%c\n",n);
	if (n<=90 && n<=65)
	{
		printf("Character is in Upper Case");
	}
	else if (n>31 && n<65)
	{
		printf("Character is  Special Character");
		
	}
	else if (n>0 && n<32)
	{
		printf("Character is  Random Character");
		
	}
	else
	{
		printf("Character is  Lower case");
		
	}
}

//32-64