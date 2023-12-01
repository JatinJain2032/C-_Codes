#include <stdio.h>
int main()
{
    int a = 6;

    int *ptra = &a;

    printf("The addres of pointer is %d\n", &ptra);
    printf("The address of a is %d\n", &a);
    printf("The addressof a is %d\n", ptra);
    printf("THe value of a is %d\n", *ptra);
    printf("THe value of a is %d\n", a);
     printf("THe value of a is %d\n", *&a);  //dereferencing
    printf("THe address of a is %d\n", ptra + 1);
    printf("THe address of a is %d\n", ptra + 2);

    ptra++;
    printf("THe address of a is %d\n", ptra);

    ptra--;
     printf("THe address of a is %d\n", ptra);

    return 0;
}