#include<stdio.h>
int main()
{
    int sum=0;
    int a[i][j];
    int row,col;
    printf("Enter the array's row size : ");
    scanf("%d",row);
    printf("Enter the array's column size : ");
    scanf("%d",col);
    printf("\n\nArray Input\n\n");
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; i<col ; j++)
        {
            sum = sum +a[i][j];
        }
    }
    printf("Average of Array : %d",sum/(row*col));
}