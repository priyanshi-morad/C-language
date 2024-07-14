#include<stdio.h>
#include<string.h>
void main()
{
    char name[20];
    printf("enter your name :  ");
    gets(name);
     char rev[20];
    strcpy(rev,name);
    strrev(rev);
    if(strcmp(name,rev)==0)
    {
        printf("%s is pallindrome string",name);
    }
    else
    {
        printf("%s is not a pallindrome string",name);
    }
}
