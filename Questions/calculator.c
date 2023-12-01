#include <stdio.h>
int main()
{
    int i, a, b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    printf("\n1.Addition");
    printf("\n2.sutraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\nENter the the number to perform the operation you want\n");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
        printf("Addition of two number is %d", a + b);
        break;

    case 2:
        printf("Subtraction of two number is %d", a - b);
        break;

    case 3:
        printf("Multiplication of two number is %d", a * b);
        break;

    case 4:
        printf("Division of two number is %d", a / b);
        break;
    }
    return 0;
}