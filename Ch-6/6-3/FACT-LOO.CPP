#include<stdio.h>
#include<conio.h>
main()
{

       int a=1;
       int n;
       int mul=1;
       clrscr();
       printf("Enter any number : ");
       scanf("%d",&n);
       while(a<=n)
       {
		 mul*=a;

		 a++;

       }
	printf("Factorial of %d is %d",n,mul);

       getch();

}

















