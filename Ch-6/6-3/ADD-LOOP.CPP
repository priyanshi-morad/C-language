#include<stdio.h>
#include<conio.h>


main()
{
       int n;
       int sum=0;
       int a=1;
       clrscr();
       printf("Enter value n : ");
       scanf("%d",&n);
       while(a<=n)
       {
	       sum=sum+a;
	       a++;

       }

       printf("The sum of all numbers : %d",sum);

       getch();

}





