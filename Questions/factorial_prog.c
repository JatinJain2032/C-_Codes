#include <stdio.h>

// we will print the factorial of a given number
// n!=n*(n-1)*(n-2)*(n-3)......
// int main()
// {
//     int n,factorial=1;
//     printf("Enter the number of which you want factorial:");
//     scanf("%d",&n);
//     if(n==0  || n==1)
//     {
//         printf("factorial is 1");
//     }
//     else
//     {
//         for(int i=n-(n-1);i<=n;i++)// or we can use for(i=1;i<=n;i++) loop
//          factorial*=i;// if you take n=4 it will calculate like this--> 4*3*2*1=24
//     }
//     printf("\nFactorial of given no is %d",factorial);

//     return 0;
// }

//using recurrsion

int factorial(int n)
{
    if (n == 0)  //base case
        return 1;
    else
        return (n * factorial(n - 1));
}
int main()
{
    int n, f;
    printf("Enter the number of which you want factorial:");
    scanf("%d", &n);
    f = factorial(n);
    printf("factorial is %d", f);

    return 0;
}