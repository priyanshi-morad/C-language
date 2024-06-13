#include<stdio.h>
#include<conio.h>
main()
{
   int h,b;
   clrscr();
   printf("Height of triangle:");
   scanf("%d",&h);
   printf("Base of triangle:");
   scanf("%d",&b);
   printf("\n");
   printf("Area of triangle:%f",0.5*h*b);
   getch();
}