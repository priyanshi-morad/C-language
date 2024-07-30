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
    int square[size];
    for (int i = 0; i <size; i++)
    {
        square[i]=a[i]*a[i];
    }
    int *ptr=&square[0];
    printf("\n\nSquare of elements\n\n");
    for (int i = 0; i <size; i++)
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\n");
    
    
}
    