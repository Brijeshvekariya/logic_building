#include<stdio.h>
int main()
{
	char name[20];

	printf("Enter Team Name : ");
	scanf("%s",name);
	
	printf("\n%c%c%c ",name[0],name[1],name[2]);

}