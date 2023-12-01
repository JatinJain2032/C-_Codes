#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0, add = 0;
    int a[3][4], b[4][2], c[2][3], result[3][2], final[3][3];

    printf("Enter your first matrix\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter your second matrix\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Enter your third matrix\n");

    for (int m = 0; m < 2; m++)
    {
        for (int n = 0; n < 3; n++)
        {
            scanf("%d", &c[m][n]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            //calculate the result
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    //print the calculated matrix
    printf("Mulitplication of matrix a and b is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    //*********************************************************************************//
    // muliplication of resulatatn matrix with third matrix

    for (int l = 0; l < 2; l++)
    {
        for (int m = 0; m < 2; m++)
        {
            //calculate the reuslt
            for (int n = 0; n < 3; n++)
            {
                add += c[l][n] * result[n][m];
            }
            final[l][m] = add;
            add = 0;
        }
    }

    //print the final calculated matrix
    printf("The multiplication of matrix C and result matrix is:\n");

    for (int l = 0; l < 2; l++)
    {
        for (int m = 0; m < 2; m++)
        {
            printf("%d ", final[l][m]);
        }
        printf("\n");
    }

    return 0;
}