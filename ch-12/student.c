#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Student
{
     int std_id;
     char std_name[20];
     int std_age;
     char std_course[20];
     char std_city[20];
     int std_standard;
     char std_school[30];
};
void main()
{
    int n;
    printf("Enter number of students : ");
    scanf("%d",&n);
    struct Student s[n];
    for (int i = 0; i < n; i++)
    {
        system("cls");
        printf("ID\t:");
        scanf("%d",&s[i].std_id);

        fflush(stdin);

        printf("NAME\t:");
        gets(s[i].std_name);

         printf("AGE\t:");
        scanf("%d",&s[i].std_age);
        
        fflush(stdin);

        printf("COURSE\t:");
        gets(s[i].std_course);

        printf("CITY\t:");
        gets(s[i].std_city);

         printf("STANDARD\t:");
        scanf("%d",&s[i].std_standard);

        fflush(stdin);

        printf("SCHOOL\t:");
        gets(s[i].std_school);
    }
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("ID\t:%d\n",s[i].std_id);
        printf("NAME\t:%c\n",s[i].std_name);
        printf("AGE\t:%d\n",s[i].std_age);
         printf("COURSE\t:%c\n",s[i].std_course);
        printf("CITY\t:%c\n",s[i].std_city);
        printf("STANDARD\t:%d\n",s[i].std_standard);
         printf("SCHOOL\t:%c\n",s[i].std_school);
    }
}