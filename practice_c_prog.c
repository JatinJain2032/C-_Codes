#include <stdio.h>

int main()
{
    int n,r;
    printf("Enter a no and i will tell you it is even or odd");
    scanf("%d",&n);

    r=n%2;
    if(r=0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("number is odd\n");
    }
}