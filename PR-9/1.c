#include<stdio.h>
void main()
{
   FILE *even;
   even=fopen("even_file.txt" , "w"); 
    FILE *odd;
   odd=fopen("odd_file.txt" , "w"); 
  
    fprintf(even,"Even numbers from even_file");
    fprintf(even,"\n");
      for (int i = 50; i <=70; i++)
   {
      if(i % 2==0)
      {
        fprintf(even,"%d",i);
      }
      fprintf(even,",");
   }
    fprintf(odd ,"Odd numbers from even_file");
    fprintf(odd,"\n");
   for (int i = 50; i <=70; i++)
   {
      if(i % 2!=0)
      {
        fprintf(odd,"%d",i);
      }
      fprintf(odd,",");
   }

}