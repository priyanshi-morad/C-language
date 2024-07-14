#include<stdio.h>
#include<conio.h>
void main()
{
    char name[20],c;
    int fec=0;
    printf("enter your name : ");
    gets(name);
    for(c='a';c<='z'; c++)
    {
        fec=0;
        for (int i = 0; name[i]!=NULL; i++)
        {
            if(c==name[i])
            fec++;
        }
        if(fec>0)
        printf("%c => %d",c,fec);
         printf("\n");
        
    }
    
}
    
