#include<stdio.h>
#include<conio.h>
main()
{
   int x,y;
   clrscr();
   printf("X:");
   scanf("%d",&x);
   printf("Y:");
   scanf("%d",&y);
   printf("(x+y)^2:%d",x^2+y^2+2*x*y);
   getch();
}