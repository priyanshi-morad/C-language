#include<stdio.h>
int main()
{
    int size;
    int sum[size];
    int a[size],b[size];
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] : ",i);
        scanf("%[^\n]",&a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("b[%d] : ",i);
        scanf("%[^\n]",&b[i]);
    }
    for (int i = 0; i < size; i++)
    {
        sum[i] = a[i]+b[i];
    }
    printf("Array C is : \n");
    for(int i=0 ; i<size ; i++)
    {
        printf("%d",sum[i]);
    }
}
    