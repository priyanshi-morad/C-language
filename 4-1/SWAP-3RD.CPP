#include<stdio.h>
#include<conio.h>

main()
{
   int a=15,b=25,c;
   clrscr();
   printf("Before swapping:\n");
   printf("A:%d\n",a);
   printf("B:%d\n",b);
   printf("After swapping:\n");
   c=b;
   a=c;
   b=c;
   printf("A:%d\n",a);
   printf("B:%d\n",b);
   getch();
}