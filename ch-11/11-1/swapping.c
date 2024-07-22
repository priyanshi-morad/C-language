#include<stdio.h>
void swap(int *a , int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void main()
{
    int a,b;
    printf("\nBefore Swapping\n");
    printf("A\t: ");
    scanf("%d",&a); 
    printf("B\t: ");
    scanf("%d",&b); 
    swap(&a,&b);
    printf("\nAfter Swapping\n");
    printf("A\t : %d\n",a);
    printf("B\t : %d",b);
  
}