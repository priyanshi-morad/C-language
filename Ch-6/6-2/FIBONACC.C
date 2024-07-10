#include<stdio.h>
#include<conio.h>
main()
{
       int num1=0,num2=1,sum,n;
       clrscr();
       printf("Enter any number : ");
       scanf("%d",&n);
       for(int i=1 ; i<=n ; ++i)
       {
	    printf("%d",num1);
	    sum=num1+num2;
	    num1=num2;
	    num2=sum;
       }
       getch();
}