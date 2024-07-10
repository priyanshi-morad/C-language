#include<stdio.h>
#include<conio.h>
main()
{
       int n;
       clrscr();
       printf("Enter any number : ");
       scanf("%d",&n);
       while(n>=1)
       {
	  if(n%2!=0)
	  {
	     printf("%d\t",n--);
	  }
       }

       getch();
}

















