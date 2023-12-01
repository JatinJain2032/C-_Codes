# include <stdio.h>
int main()
{
    //Area of cylinder
    int r,h;
    float pi=3.14;

    printf("Enter the value of Radius and height of cylinder");
    scanf("%d%d",&r,&h);
    printf("Area of cylinder is= %f \n2 3", 2*pi*r*h+(2*pi*r*r));
    printf("Volume of cylinder is= %f", pi*r*r*h);

    return 0;
}