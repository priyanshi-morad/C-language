#include<stdio.h>
void main()
{
    int size;
    printf("Enter size of an array : ");
    scanf("%d",&size);
    int a[size];
    for (int i = 0; i <size; i++)
    {
       printf("a[%d] : ",i);
       scanf("%d",&a[i]);
    }
    int mul[size];
    for (int i = 0; i < size; i++)
    {
         mul[i] = a[i]*a[i];
    }
    int *ptr=&mul[0];
    for (int i = 0; i < size; i++)
    {
       printf("%d",*(ptr+i));
        printf(",");
    }
}