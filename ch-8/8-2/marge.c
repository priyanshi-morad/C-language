#include<stdio.h>
int main()
{
    int s1,s2;
    int a[s1],b[s2];
    int marge[s1+s2];
    printf("Enter first array size : ");
    scanf("%d",&s1);
    printf("\n\nEnter array A's elements\n\n");
    for (int i = 0; i < s1 ;  i++)
    {
       printf("a[%d] : ",i);
       scanf("%d",&a[i]);
    }
    printf("\n\n");
     printf("Enter second array size : ");
    scanf("%d",&s2);
     printf("\n\nEnter array B's elements\n\n");
    for (int i = 0; i < s2 ;  i++)
    {
       printf("b[%d] : ",i);
       scanf("%d",&b[i]);
    }
    for (int i = 0; i < s1 ;  i++)
    {
      marge[i]=a[i];
    } 
    for (int i = 0; i < s2 ;  i++)
    {
       marge[s1+i]=b[i];
    }
    for (int i = 0; i < s1+s2 ;  i++)
    {
       printf(" Array C : %d\t",marge[i]);
    }
    }
    


