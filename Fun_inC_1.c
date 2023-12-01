//with arguments and with return value
#include <stdio.h>

int sum(int a,int b); // fun prototype or declaration

int main()
{
    int a=9,b=87;
    int c=sum(a,b); // call
    printf("The sum is %d\n",c);

    return 0;
}
int sum(int a,int b)  //defination
{
    return a+b;
}