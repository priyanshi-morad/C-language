#include<stdio.h>
#include<conio.h>

main()
{
    int a=15,b=30;
    clrscr();
    printf("Before swapping:\n");
    printf("A:%d\n",a);
    printf("B:%d\n\n",b);
    printf("After swapping:\n");
    b=b-a;
    a=a+b;

    printf("A:%d\n",a);
    printf("B:%d\n",b);
    getch();
}