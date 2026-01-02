#include <stdio.h>

int main()
{
    // Negative Elements in 1D Array //

    // int a;
    // printf("Enter the array's size: ", a);
    // scanf("%d", &a);

    // int arr[a];
    // printf("Enter array's elements: \n");
    // for (int i = 0; i < a; i++)
    // {
    //     printf("a[%d] = ",i);
    //     scanf("%d", &arr[i]);
    // }

    // printf("\nNegative elements from an Array: ");
    // for (int j = 0; j < a; j++)
    // {
    //     if (arr[j] < 0)
    //     {
    //         printf("%d ",arr[j]);
    //     }
    // }

    // Largest Elements in 2D Array //

    // int b, c;
    // printf("Enter the array's row size: ");
    // scanf("%d", &b);

    // printf("Enter the array's row size: ");
    // scanf("%d", &c);

    // int s[b][c];

    // printf("\nEnter array's elements:\n");
    // for (int k = 0; k < b; k++)
    // {
    //     for (int l = 0; l < c; l++)
    // {
    //         printf("a[%d][%d] = ", k, l);
    //         scanf("%d", &s[k][l]);
    //     }
    // }

    // int Largest = s[0][0];

    // for (int k = 0; k < b; k++)
    // {
    //     for (int l = 0; l < c; l++)
    //     {
    //         if (s[k][l] > Largest)
    //         {
    //             Largest = s[k][l];
    //         }
    //     }
    // }

    // printf("\nThe Largest element is: %d\n", Largest);

    // Transpose of 2D Array //

    // int v;
    // printf("Enter the array's row & column size:");
    // scanf("%d", &v);

    // int s[v][v];
    // printf("\nEnter array's elements:\n");
    // for (int n = 0; n < v; n++)
    // {
    //     for (int m = 0; m < v; m++)
    //     {
    //         printf("a[%d][%d] = ", n, m);
    //         scanf("%d", &s[n][m]);
    //     }
    // }

    // printf("\nThe transpose matrix of an array:\n");
    // for (int n = 0; n < v; n++)
    // {
    //     for (int m = 0; m < v; m++)
    //     {
    //         printf("%d ", s[n][m]);
    //     }
    //     printf("\n");
    // }

    // Sum of Elements in Row & Column of 2D //

    int y, z;
    printf("Enter the array's row size: ");
    scanf("%d", &y);

    printf("Enter the array's column size: ");
    scanf("%d", &z);

    int p[y][z];
    printf("\nEnter array's elements:\n");
    for (int g = 0; g < y; g++)
    {
        for (int h = 0; h < z; h++)
        {
            printf("a[%d][%d] = ", g, h);
            scanf("%d", &p[g][h]);
        }
    }

    int row, col;
    int rsum = 0, csum = 0;

    printf("Enter row number: ");
    scanf("%d", &row);

    printf("Elements of row: ");
    for (int g = 0; g < y; g++)
    {
        printf("%d ", p[row][g]);
        rsum = rsum + p[row][g];
    }
    printf("\nSum of row: %d\n",rsum);

    printf("Enter col number: ");
    scanf("%d", &col);

    printf("Elements of col: ");
    for (int h = 0; h < z; h++)
    {
        printf("%d ", p[h][col]);
        csum = csum + p[h][col];
    }
    printf("\nSum of col: %d\n",csum);
}