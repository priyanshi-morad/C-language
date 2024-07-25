#include<stdio.h>
void cube(int n);
void main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    cube(n);
}
void cube(int n)
{
    printf("%d is cube of %d",n*n*n,n);
}