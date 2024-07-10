#include<stdio.h>
#include<conio.h>

main()
{
	 int a,n;
	 clrscr();
	 printf("Enter the first year : ");
	 scanf("%d",&a);
	 printf("Enter the second year : ");
	 scanf("%d",&n);
	 while(a<=n)
	 {
	     if(a%4==0)
	     {
		 printf("%d\n",a);
	     }
	      a++;
	 }
	 getch();
}























