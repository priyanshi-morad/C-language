#include<stdio.h>
int main()
{
    int size;
    int sum=0;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] : ",i);
        scanf("%[^\n]",&a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    printf("Average of array : %.2f",sum/size);
}