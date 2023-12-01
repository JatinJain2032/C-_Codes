// with argument and withour return value

#include <stdio.h>

void printstar(int n)  // fun defination
{
    for(int i=0;i<n;i++)

    printf("%c",'*');
}

int main()
{
    printstar(7); //call

    return 0;
}