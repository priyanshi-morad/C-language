#include<stdio.h>
struct Car
{
     char model_name[20];
     int year;
     int price;
};
void main()
{
    int n;
    printf("Enter number of cars : ");
    scanf("%d",&n);
    struct Car c[n];
    for (int i = 0; i < n; i++)
    {
       printf("Car number %d\n",i+1);
       printf("Model : ");
       scanf("%s",&c[i].model_name);
       printf("Year : ");
       scanf("%d",&c[i].year);
       fflush(stdin);
        printf("Price : ");
       scanf("%d",&c[i].price);
       printf("\n\n");
    }
    printf("\nCar details\n");
    for (int i = 0; i < n; i++)
    {
         printf("Car number %d\n",i+1);
         printf("Model : %s\n",c[i].model_name);
         printf("Year  : %d\n",c[i].year);
         printf("Price : %d\n",c[i].price);
         printf("\n\n");
    }
}