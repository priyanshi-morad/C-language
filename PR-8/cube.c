#include<stdio.h>
int main()
{
     int row,col;
     printf("Enter number of rows : ");
     scanf("%d",&row);
     printf("Enter number of columns : ");
     scanf("%d",&col);
     int a[row][col];
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
         }
     }
    int mul[row][col]; 
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           mul[i][j]= a[i][j]*a[i][j]*a[i][j];
        }
     }
     int *ptr=&mul[0][0];
     printf("Cube of an array : ");
     printf("\n");
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           printf("%d\t",*(ptr+i*col+j));
        }
         printf("\n");
     }
}


    
    
