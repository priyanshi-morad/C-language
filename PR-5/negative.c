#include<stdio.h>
main()
{
    int size;
    printf("Enter the array's size : ");
    scanf("%d",&size);
    int a[size];
    printf("\n\nEnter array's elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("Negative elements of an array : ");
    for (int i = 0; i < size; i++)
    {
        if(a[i]<0)
        {
            printf("%d",a[i]);
        }
    }
    printf(",");
    
    
}