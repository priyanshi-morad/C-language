#include<stdio.h>
#include<conio.h>
main()
{
  int a,b;
  clrscr();
  printf("Enter the first number A:");
  scanf("%d",&a);
  printf("Enter the second number B:");
  scanf("%d",&b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("A\t:%d\n",a);
  printf("B\t:%d",b);
  getch();



}