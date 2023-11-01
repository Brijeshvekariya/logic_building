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
	printf("Cricketer name is  \n%c. ",name[0]);
	printf("%c. ",middlename[0]);
	printf("%s",lastname);
}