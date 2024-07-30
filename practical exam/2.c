#include<stdio.h>
int main()
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
    
    for (int i = 1; i < size; i++)
    {
        if(a[0]<a[i])
        {
           a[0]=a[i];
        }
    }
    printf("%d is largest",a[0]);
}