#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, a[10];

    printf("ENter the decimal no and I will convert it in the binary format");
    scanf("%d", &n);

    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }

    printf("\nBinary of Given Number is=");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    return 0;
}