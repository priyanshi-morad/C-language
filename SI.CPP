#include<stdio.h>]
#include<conio.h>

main()
{
   int p,r,t;
  clrscr();
  printf("Principal value:");
  scanf("%d",&p);
  printf("Interest rate:");
  scanf("%d",&r);
  printf("Time duration:");
  scanf("%d",&t);
  printf("\n");
  printf("Simple interest:%d",(p*r*t)/100);
  getch();
}