#include<stdio.h>
#include<conio.h>
main()
{
       int n,len=0;
       clrscr();
       printf("Enter any number : ");
       scanf("%d",&n);
       do
       {
	  n=n/10;
	  len++;

       }while(n!=0);
       printf("Number of digits : %d",len);

       getch();

}

















