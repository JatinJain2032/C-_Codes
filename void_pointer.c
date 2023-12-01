#include <stdio.h>
// C does not allow void pointers to be dereferenced. 
// We cannot use pointer arithmetic with void pointers.

int main()
{
    int a=45;
    float b=3.5;
    void *ptr;
    ptr=&a;
    printf("The value of a is %d\n",*((int *)ptr)); //refrencing the pointer
    ptr=&b;
      printf("The value of b is %f\n",*((float *)ptr));
}