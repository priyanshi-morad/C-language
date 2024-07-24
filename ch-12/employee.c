#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Employee
{
     int emp_id;
     char emp_name[20];
     int emp_age;
     char emp_role[20];
     char emp_city[20];
     int emp_experience;
     char emp_company_name[30];
};
void main()
{
    int n;
    printf("Enter number of employee: ");
    scanf("%d",&n);
    struct Employee e[n];
    for (int i = 0; i < n; i++)
    {
        system("cls");
        printf("ID\t:");
        scanf("%d",&e[i].emp_id);

        fflush(stdin);

        printf("NAME\t:");
        scanf("%s",&e[i].emp_name);

         printf("AGE\t:");
        scanf("%d",&e[i].emp_age);
        
        fflush(stdin);

        printf("ROLE\t:");
        scanf("%s",&e[i].emp_role);
        
        printf("CITY\t:");
        scanf("%s",&e[i].emp_city);
       
         printf("EXPERIENCE\t:");
        scanf("%d",&e[i].emp_experience);

        fflush(stdin);

        printf("COMPANY_NAME\t:");
        scanf("%s",&e[i].emp_company_name);
    }
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("ID\t:%d\n",e[i].emp_id);
        printf("NAME\t:%s\n",e[i].emp_name);
        printf("AGE\t:%d\n",e[i].emp_age);
        printf("ROLE\t:%s\n",e[i].emp_role);
        printf("CITY\t:%s\n",e[i].emp_city);
        printf("EXPERIENCE\t:%d\n",e[i].emp_experience); 
        printf("COMPANY_NAME\t:%s\n",e[i].emp_company_name);
    }
}