#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter the array's row size : ");
    scanf("%d", &row);
    printf("Enter the array's column  size : ");
    scanf("%d", &col);

    int a[row][col];
    printf("\n\nEnter array's elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j< col; j++)
        {
            printf("a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int transpose[row][col];
    printf("\n\nTranspose of matrix : \n");
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j< col; j++)
        {
                transpose[i][j] = a[j][i];
                printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
}
