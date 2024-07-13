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
    int max;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
             if(max<a[i][j])
             {
                max=a[i][j];
             } 
        }
    }
    printf("Largest element is %d",max);
}
    
    
    

