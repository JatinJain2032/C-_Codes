#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define SQUARE(r) (r * r)

int main()
{
    // int r;
    // float var=PI;
    // printf("Enter the value of radius\n");
    // scanf("%d",&r);
    // printf("The value of PI is %f\n",var);
    // printf("The area of circle is %f\n",PI*SQUARE(r));
    printf( __FILE__);
    printf("Time now is is %s\n", __TIME__);
    printf("Today date is %s\n", __DATE__);
    printf("Line no is %d\n", __LINE__);

    return 0;
}