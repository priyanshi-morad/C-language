#include<stdio.h>
int main()
{
    int row,col;
     int sum=0;
     printf("Enter the array's row size  :");
    scanf("%d",&row);
     printf("Enter the array's column size  :");
    scanf("%d",&col);
    int a[row][col];
    printf("\n\nEnter array A's elements :\n ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <col; j++)
        {
             printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <col; j++)
        {
             if(i==j)
             {
                sum=sum+a[i][j];
             }
        }
    }
    printf("\n\n");
    printf("Sum of diagonal elements : %d",sum);
}