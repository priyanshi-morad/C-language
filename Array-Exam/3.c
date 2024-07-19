#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter number of row : ");
    scanf("%d",&row);
    printf("Enter number of column : ");
    scanf("%d",&col);
    int a[row][col];
    printf("\nArray Input : \n");
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
     }
     printf("\n\nDiagonal elements :");
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i==j)
            {
                printf("%d",a[i][j]);
            }
        }
         printf(",");
    }
    printf("\n\nCross Diagonal elements : ");
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i==j || i+j==row-1)
            {
                printf("%d",a[i][j]);
            }
        }
        printf(",");
    }
    int sum=0;
    printf("\n\nAddition of boundary elements : ");
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i==0 || j==0 || i==row-1 || j==col-1)
            {
                 sum+=a[i][j];
            }
        }
    }
    printf("%d",sum);
    int mul=1;
    printf("\n\nMultiplication of anti-diagonal elements : ");
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i+j==row-1)
            {
                 mul*=a[i][j];
            }
        }
    }
    printf("%d",mul);
    
}