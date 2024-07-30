#include<stdio.h>
#include<string.h>
void reverse(char name[20]);
void main()
{
    char name[20];
    printf("Entered string : ");
    scanf("%s",&name);
    int len=strlen(name);
   for (int i = 0, j=len-1; i<=j; i++,j--)
    {
       char c=name[i];
       name[i]=name[j];
       name[j]=c;
    }
    reverse(name);
   
}
void reverse(char name[20])
{
    printf("Reversed string : %s",name);
    
}