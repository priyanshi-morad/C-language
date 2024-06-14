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
      printf("\n");
      printf("(x+y)^3 : %d",x^3 + y^3 + 3*x^2*y + 3*x*y^2);
      getch();
}