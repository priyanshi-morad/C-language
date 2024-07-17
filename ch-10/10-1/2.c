#include<stdio.h>
#include<string.h>
int main()
{
     char email[20]="kevin@gmail.com";
     int pass=12;
     char ch[20];
     printf("Enter your email :\n ");
     gets(ch);
     int pass1;
     printf("Enter your password : ");
      scanf("%d",&pass1);
    if((strcmp(email ,ch)==0) &&( pass==pass1))
    {
       printf("login successful...");  
    }
    else
    {
        printf("login failed.Invalid credentials"); 
    }
}
