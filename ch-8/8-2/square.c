#include<stdio.h>
int main()
{
    int size;
    int a[size];
    int n[size];
    printf("Enter array size : ");
    scanf("%d",&size);
    printf("\n\nEnter array elements\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i <size; i++)
    {
         n[i]=a[i]*a[i];
         
    } 
     for (int i = 0; i <size; i++)
    {
        printf("%d",n[i]); 
    } 
}    