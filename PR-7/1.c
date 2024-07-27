#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("PRESS 1 FOR +\n");
    printf("PRESS 2 FOR -\n");
    printf("PRESS 3 FOR *\n");
    printf("PRESS 4 FOR /\n");
    printf("PRESS 5 FOR %%\n");
    printf("PRESS 0 FOR exist\n");
    int  n,x,y;
    printf("Enter your choice :");
    scanf("%d",&n);
    switch(n)
    {
            case 1:
                  printf("Enter first number : ");
                  scanf("%d",&x);
                  printf("Enter second number : ");
                  scanf("%d",&y);
                   printf("Addition of %d and %d is %d",x,y,x+y);
               
               break;
           case 2: 
                if(n==2)
               {
                    printf("Enter first number : ");
                    scanf("%d",&x);
                    printf("Enter second number : ");
                    scanf("%d",&y);
                     printf("subtraction of %d and %d is %d",x,y,x-y);
               }
              break;
          case 3:
                   if(n==3)
               {
                    printf("Enter first number : ");
                     scanf("%d",&x);
                     printf("Enter second number : ");
                     scanf("%d",&y); 
                    printf("multiplication of %d and %d is %d",x,y,x*y);
               }
              break;
          case 4: 
                  if(n==4)
               {
                  printf("Enter first number : ");
                  scanf("%d",&x);
                  printf("Enter second number : ");
                  scanf("%d",&y);
                   printf("division of %d and %d is %d",x,y,x/y);
               }
              break;
           case 5:
                  if(n==5)
               {
                    printf("Enter first number : ");
                     scanf("%d",&x);
                     printf("Enter second number : ");
                    scanf("%d",&y);
                   printf("modulo of %d and %d is %d",x,y,x%y);
               }
              break;
           case 6:
                  if(n==0)
                {
                    printf(" ");
                }
    }          

    }