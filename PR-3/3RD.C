#include<stdio.h>
#include<conio.h>
main()
{
       int n ,firstDigit, lastDigit, sum=0;
       clrscr();
       printf("Enter any number : ");
       scanf("%d",&n);
       lastDigit=n%10;
       firstDigit=n;
       while(n>=10)
       {
	   n=n/10;
       }
       firstDigit=n;
       sum=firstDigit+lastDigit;
       printf("Sum of first and last digit is : %d",sum);

       getch();
}















