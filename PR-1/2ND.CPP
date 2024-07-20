#include<stdio.h>
#include<conio.h>
main()
{
   int b,h,d,t;
   const int HRA=10;
   const int DA=5;
   const int TA=8;
   clrscr();
   printf("base salary:");
   scanf("%d",&b);
   h=(HRA*100)/100;
   d=(DA*100)/100;
   t=(TA*100)/100;
   printf("\n\n");
   printf("Rs:%d",b+h+d+t);
   getch();
}
