#include<stdio.h>

int main()
{
	int i,j,arr[3][3],sum=0;
	
	int *p = arr; 
	
	
	printf("Enter the elements into the 3x3 matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", p);
			p++; 
		}
	}
	
	
    p = arr;
	
	
    printf("\nOriginal Array:\n");
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
        
        	printf("%d ", *p);
        	p++; 	
		}
		printf("\n");
    }
    

    p = arr;
    
   
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
        	if(i == j)
        		sum += *p;
        	p++;
		}
    }
    
    
    printf("Sum of all diagonal elements of the 3x3 array: %d", sum);
}
