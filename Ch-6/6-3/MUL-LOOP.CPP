#include<stdio.h>
#include<conio.h>

main()
{
	  int n;
	  int mul=1;
	  int a=1;
	   clrscr();
	   printf("Enter any number : ");
	   scanf("%d",&n);
	   while(a<=10)
	   {
	       mul*=a;
	       printf("%d * %d = %d\n",n,a,n*a);
	       a++;

	   }

	   getch();

}












