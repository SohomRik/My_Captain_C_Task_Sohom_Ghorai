#include<stdio.h>

int sum_of_digit(int n)
{
	if(n==0)
		return 0;
	else
		return(n%10+sum_of_digit(n/10));
}

int main()
{
	int num = 0;
	printf("Enter a Number : ");
	scanf("%d",&num);
	int sum = sum_of_digit(num);
	printf("Sum of digits in %d is %d\n", num,sum);
	return 0;
}
