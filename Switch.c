#include<stdio.h>

int main()
{
	printf("What do you like to Eat ? \n1. Pizza, Rs 239 \n2. Burger, Rs 129 \n3. Pasta, Rs 179 \n4. French Fries, Rs 99 \n5. Sandwich, Rs 149\n\n");
	
	int choice = 0;
	printf("Enter the number of choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
	
		case 1:
			printf("Food Item - Pizza \nRs 239");
			break;
		case 2:
			printf("Food Item - Burger \nRs 129");
			break;
		case 3:
			printf("Food Item - Pasta \nRs 179");
			break;
		case 4:
			printf("Food Item - French Fries \nRs 99");
			break;	
		case 5:
			printf("Food Item - Sandwich \nRs 149");
			break;
		default:
			printf("Invalid Choice");
    }
	return 0;
}
