#include<stdio.h>
#include<conio.h>
#define pi 3.14
main()
{
    int a;
    clrscr();
    printf("Radius of circle:");
    scanf("%d",&a);
    printf("\n");
    printf("Perimeter of circle:%.2f",2*pi*a);
    getch();
}