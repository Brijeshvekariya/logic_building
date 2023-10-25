/* 
operator : to perform some specific operations between two operands
1. Arithmetic (+,-,*,/,%)
2. assignment (==)
3. relational (>,<,>=,<=)
4. bitwise (perform in bit)
5. unary operator (increment ++, decrement --)
6. logical (&&, ||, !)
7. Conditional or Ternary(?)
8. Special operator (sizeof(), comma (,))

*/
#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter Number 1 : ");
	scanf("%d",&n1);
	printf("Enter Number 2 : ");
	scanf("%d",&n2);
	int max = n1>n2 ? n1:n2;
	printf("%d\n",max);
}