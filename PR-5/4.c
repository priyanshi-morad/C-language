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
    int p;
    int sum=0;
    printf("Enter row number : ");
    scanf("%d",&p);
    printf("Elements of row : ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j< col; j++)
        {
                if(p==i)
                {
                      sum = sum + a[i][j];
                      printf("%d",a[i][j]);
                }
                 printf(",");
                
         }
    }
     printf("\n");
      printf("The sum of row %d : %d",p,sum);
      printf("\n\n");
     int q;
    int sum2=0;
    printf("Enter column number : ");
    scanf("%d",&q);
    printf("Elements of columns: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j< col; j++)
        {
                if(q==j)
                {
                      sum2 = sum2 + a[i][j];
                      printf("%d",a[i][j]);
                }
                 printf(",");
                
         }
    }
    
     printf("\n");
     printf("The sum of column %d : %d",q,sum2);
}
    