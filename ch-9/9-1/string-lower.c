#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter your name : ");
    scanf("%[^\n]", &name);
    printf("Name : %s",name);
    printf("\n\n");
    for (int i = 0; name[i]!='\0'; i++)
    {
       if(name[i]>=65&&name[i]<=90)
       name[i]+=32;
    }
    
    printf("name\t:%s",name);
    
}