#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	
	printf("Before swapping : \nFirst number = %d and Second number = %d",a,b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("\nAfter swapping : \nFirst number = %d and Second number = %d",a,b);
}
