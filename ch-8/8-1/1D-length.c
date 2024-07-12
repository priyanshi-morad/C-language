#include<stdio.h>
main()
{
    int size;
    int a[size];
    int len=0;
    printf("Enter array size : ");
    scanf("%d",size);
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
        len++;
    }
    printf("Length of array : %d",len);
    
}