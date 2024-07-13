#include <stdio.h>
main()
{
    int y1, y2, n = 0;
    int a[100];
    printf("Enter first year : ");
    scanf("%d", &y1);
    printf("Enter second year : ");
    scanf("%d", &y2);
    for (int i = y1; i <= y2; i++)
    {
        if (i % 4 == 0)
        {
            a[n++] = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
