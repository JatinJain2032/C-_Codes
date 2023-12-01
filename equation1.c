#include <math.h>
#include <stdio.h>

// The function pow() returns a double. You're assigning it to variable a, of type int. 
// Doing that doesn't "round off" the floating point value, it truncates it. So pow() is returning something like 99.99999... 
// for 10^2, and then you're just throwing away the .9999... part. Better to say a = round(pow(10, i)).
int main()
{
    int x,n,power;  //use of float or double will be better // or we can use logn int
    printf("Enter the value for x:");
    scanf("%d",&x);
     printf("Enter the value for x:");
    scanf("%d",&n);
    power=round(pow(x,n));
    printf("Value is %d",power);


    return 0;
}
