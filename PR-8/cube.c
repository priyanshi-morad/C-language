#include<stdio.h>
void array( int row , int col , int a[row][col]);
void main()
{
 int row,col;
     printf("Enter row :");
    scanf("%d",&row);
    printf("Enter column :");
    scanf("%d",&col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
       for (int j= 0; j < col; j++)
       {
           printf("a[%d][%d] : ",i,j);
           scanf("%d",&a[i][j]);
       }
       
    }
    
    
}
void array( int row , int col , int a[row][col])
{
   printf("sum = %d",row+col);
}