#include<stdio.h>
struct employee
{
    int id,age,salary;
    char name[25];
    char ph[10];
}emp[100];
 
void main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter details of Employee %d \n",i );
        printf("Enter employee Id of Employee %d : ",i);
        scanf("%d",&emp[i].id);
        printf("\nEnter employee Name of Employee %d : ",i);
        scanf("%s",&emp[i].name);
        printf("\nEnter employee Phone Number of Employee %d : ",i);
        scanf("%s",&emp[i].ph);
        printf("\nEnter employee Age of Employee %d : ",i);
        scanf("%d",&emp[i].age);
        printf("\Enter employee Salary of Employee %d :  ",i);
        scanf("%d",&emp[i].salary);
    }
    printf("\nEMP_ID\tEMP_NAME\tEMP_PHONE\t\tEMP_AGE\t EMP_SAL\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t%s\t\t%s\t\t%d\t%d\n",emp[i].id,emp[i].name,emp[i].ph,emp[i].age,emp[i].salary);
    }
}
