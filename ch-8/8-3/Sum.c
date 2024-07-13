#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the array's row size  :");
    scanf("%d",&row);
     printf("Enter the array's column size  :");
    scanf("%d",&col);
     int a[row][col],b[row][col];
    printf("\n\nEnter array A's elements : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <col; j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\nEnter array B's elements : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <col; j++)
        {
            printf("b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
     int sum[row][col];
    printf("\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <col; j++)
        {
           sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\n\n array C:\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <col; j++)
        {
           printf("%d\t",sum[i][j]);
        }
         printf("\n");
    }
}