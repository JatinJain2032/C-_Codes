#include <stdio.h>

int main()
{
    int a=32;

    int *ptr1=&a;
    int *ptr2 =NULL;

    printf("The address of pointer is %p\n", &ptr1);
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", ptr1);
    printf("The address of some garbage is %p\n", ptr2);
    printf("The value of a is %d\n",*ptr1);
    printf("The value of a is %d\n",a);

    

    return 0;
    
    
    
    

}