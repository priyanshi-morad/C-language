#include<stdio.h>
#include<conio.h>

main()
{
  int c;
  float f;
  clrscr();
  printf("The temperature in celcius:");
  scanf("%d",&c);
  f=(c*9/5)+32;
  printf("\n\n");
  printf("The temperature in fahrenheit:%f",f);
  getch();
}