#include<stdio.h>
struct Student
{
    int roll_no;
     char name[20];
     char course[20];

};
void main()
{
    FILE *fp;
    fp=fopen("data.txt","w");
    struct Student s[3];
    for (int i = 0; i < 3; i++)
    {
       printf("student number : %d\n",i+1);
       printf("Enter roll no. : ");
       scanf("%d",s[i].roll_no);
       fflush(stdin);
        printf("Enter Name : ");
       scanf("%s",s[i].name);
        printf("Enter Course : ");
       scanf("%s",s[i].course);
       printf("\n\n");
    }
    for (int i = 0; i < 3; i++)
    {
        fprintf(fp,"Student number : %d",i+1);
        fprintf(fp,"Enter roll no. : %d\n",s[i].roll_no);
        fprintf(fp,"Enter Name : %dsn",s[i].name);
        fprintf(fp,"Enter Couse : %s\n",s[i].course);
        fprintf(fp,"\n\n");
    }
}