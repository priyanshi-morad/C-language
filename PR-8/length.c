#include<stdio.h>
#include<string.h>
int main()
{
    char string[20],*ptr;
    printf("Enter any string : ");
    scanf("%[^\n]",&string);
     ptr=string;
    int len=0;
    for (int i = 0; *ptr!='\0'; i++)
    {
       len++;
       ptr++; 
    }
    
    printf("length of string is : %d",len);
}