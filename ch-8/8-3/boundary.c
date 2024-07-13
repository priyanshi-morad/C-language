#include<stdio.h>
 int main()
{
    int row,col;
    printf("Enter the array's row size  :");
    scanf("%d",&row);
     printf("Enter the array's column size  :");
    scanf("%d",&col);
     int a[row][col];
    printf("\n\nEnter array A's elements : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <col; j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Boundary elements : \n");
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <col; j++)
        {
            if(i==0 || j==0 || i==row-1 || j==col-1)
            {
                printf("%d",a[i][j]);
            }
            else
            {
                printf(" ");
            }
             printf("\n");
        }
    }
    int sum=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <col; j++)
        {
            if(i==0 || j==0 || i==row-1 || j==col-1)
            {
                sum+=a[i][j];
               
            }
        }
    }  
    printf("Sum of boundary elements : %d",sum);  
}    
    