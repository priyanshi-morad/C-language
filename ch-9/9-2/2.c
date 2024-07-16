#include<stdio.h>
#include<string.h>
int main()
{
    char email[20];
    printf("Enter your email : ");
     gets(email);
     int pass;
     printf("Enter your password : ");
     scanf("%d",&pass);
     printf("\n\nVerify your account\n\n");
     char email1[20];
     printf("Enter your email :\n ");
     gets(email1);
     int pass1;
     printf("Enter your password : ");
      scanf("%d",&pass1);
    if((strcmp(email ,email1)==0) &&( pass==pass1))
    {
       printf("login successful...");  
    }
    else
    {
        printf("login failed.Invalid credentials"); 
    }
}
