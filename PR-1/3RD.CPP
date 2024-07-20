#include<stdio.h>
#include<conio.h>
main()

{
  int a,b,c;
  clrscr();
  printf("First angle:");
  scanf("%d",&a);
  printf("Seconf angle:");
  scanf("%d",&b);
  c=180-(a+b);
  printf("\n\n");
  printf("Third angle:%d",c);
  getch();
}