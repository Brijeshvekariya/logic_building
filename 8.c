#include<stdio.h>
int main()
{
	char name[20];
	char middlename[20];
	char lastname[30];
	printf("Enter First Name : ");
	scanf("%s",name);
	printf("Enter Middle name : ");
	scanf("%s",middlename);
	printf("Enter last name : ");
	scanf("%s",lastname);
	printf("\n%c. ",name);
	printf("%c. ",middlename);
	printf("%s",lastname);
}