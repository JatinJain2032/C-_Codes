#include <stdio.h>
int main()
{
    float n, x, sum=0, avg;
    printf("Enter the number of elements:");
    scanf("%f", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &x);
        sum += x;
    }

    avg = sum/n;

    printf("Average of all no is %f",avg);
    return 0;
}