#include <stdio.h>

int main()
{
    printf("Right half triangle pattern:\n");

    for (int i = 41; i <= 45; i++)
    {
        for (int j = 41; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    printf("\n");

    printf("Floyd's triangle pattern:\n");

    int c = 11;
    for (int a = 1; a <= 4; a++)
    {
        for (int b = 1; b <= a; b++)
        {
            printf("%d ", c);
            c++;
        }
        printf("\n");
    }

    printf("\n");

    printf("left half triangle pattern:\n");

    for (int h = 5; h >= 1; h--)
    {
        for (int k = 1; k <= h - 1; k++)
        {
            printf("  ");
        }
        for (int l = 5; l >= h; l--)
        {
            printf("%d ", l);
        }
        printf("\n");
    }
    
    printf("\n");

    printf("Inverted Left half triangle pattern:\n");

    for (int r = 5; r >= 1; r--)
    {
        for (int s = 5; s > r; s--)
        {
            printf("  ");
        }
        for (int t = 1; t <= r; t++)
        {
            if(t % 2 == 1)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    printf("\n");

    printf("Full Pyramid pattern:\n");

    int z = 5;

    for (int p = z; p >= 1; p--)
    {
        for (int u = 1; u < p; u++)
        {
            printf("  ");
        }
        for (int v = p; v <= z; v++)
        {
            printf("%d ", v);
        }
        for (int v = z - 1; v >= p; v--)
        {
            printf("%d ", v);
        }
        printf("\n");
    }
    
    printf("\n");

    printf("Custom numeric pattern:\n");

    int d = 5;

    for (int e = 1; e <= d; e++)
    {
        for (int f = 1; f <= e; f++)
        {
            printf("%d ", f);
        }
        if (e != d)
        {
            for (int m = 1; m <= 2 * (d - e); m++)
            {
                printf("  ");
            }
        }
        for (int g = e; g >= 1; g--)
        {
           printf("%d ", g);
        }
        printf("\n");
    }

    printf("\n");

    printf("Custom alphabetic pattern:\n");

    for (int n = 1; n <= 5; n++)
    {
        if(n == 1||n == 3)
        {
            printf("* * * * *");
        }
        else if(n == 2)
        {
            printf("*       *");
        }
        if(n == 4||n == 5)
        {
            printf("*");
        }
        printf("\n");
    }
}