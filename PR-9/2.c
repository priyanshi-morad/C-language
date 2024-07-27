#include<stdio.h>
struct Student 
{
     int roll_no;
     char name[20];
     int chem;
     int maths;
     int phy;
     int total;
     float percent;
};
void main()
{
    FILE *fp;
    fp = fopen("stdu.txt" , "w");
    if(fp!=NULL)
    {
        int n;
        printf("Enter number of student :");
        scanf("%d",&n);
        struct Student s[n];
        for (int i = 0; i < n; i++)
        {
           printf("Roll no.=> ");
           scanf("%d",&s[i].roll_no);
             printf("Name=> ");
           scanf("%s",&s[i].name);
            printf("Chemistry=> ");
           scanf("%d",&s[i].chem);
            printf("Mathematics=> ");
           scanf("%d",&s[i].maths);
            printf("Physics=> ");
           scanf("%d",&s[i].phy);
           printf("\n");
        }
       
        for (int i = 0; i < n; i++)
        {
          s[i].total = s[i].chem + s[i].maths + s[i].phy;
          s[i].percent = (s[i].chem + s[i].maths + s[i].phy)/3;
        }
        for (int i = 0; i < n; i++)
        {
           fprintf(fp, "%s(%d)\n",s[i].name,s[i].roll_no) ; 
           fprintf(fp, "Chemistry=>%d\n",s[i].chem) ;
           fprintf(fp, "Mathematics=>%d\n",s[i].maths) ;
           fprintf(fp, "Physics=>%d\n",s[i].phy) ;
           fprintf(fp, "Total Marks=>%d\n",s[i].total) ;
           fprintf(fp, "Percentage=>%.2f\n",s[i].percent) ;
           fprintf(fp,"\n");
        }
    fclose(fp);
}
}