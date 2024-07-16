#include <stdio.h>
main()
{
    char a[20];
    printf("create your password : ");
    scanf("%s", &a);
    int len = 0;
    int lwr = 0, upr = 0, dig = 0, sc = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        len++;
    }
    if (len >= 6)
    {
        for (int i = 0; a[i] != '\0'; i++)
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                upr++;
            }
            else if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
            {
                lwr++;
            }
            else if (a[i] >= '0' && a[i] <= '9')
            {
                dig++;
            }
            else
            {
                sc++;
            }
        }
    }
    if (upr >= 1 && lwr >= 1 && dig >= 1 && sc >= 1)
    {
        printf("Password is strong");
    }
    else
    {
        printf("Password is not strong");
    }
}