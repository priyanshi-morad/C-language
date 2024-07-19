#include<stdio.h>
main()
{
    int size;
    printf("Enter size of an array : ");
    scanf("%d",&size);
    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    int sum;
    printf("Enter sum of elements : ");
    scanf("%d",&sum);
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(a[i]+a[j]==sum)
            {
                printf("%d , %d",a[i],a[j]);
            }
        }
        printf("\n");
    }
} 