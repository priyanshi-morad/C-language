#include<stdio.h>
int main()
{
    int size;
    printf("Entre size of an array : ");
    scanf("%d",&size);
    int a[size];
    printf("Enter elements of array : \n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("\n\nReverse Array Elements : \n");
    int *ptr=&a[0];
   for (int i = size-1; i >=0; i--)
   {
      printf("%d",ptr[i]);
   }
   printf(",");
}