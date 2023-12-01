# include <stdio.h>
#include <math.h>
int main()
{
    //simple Interest
    float p,r,t;
     printf("Insert the value of Principle,rate of interest, and time:");
    scanf("%f %f %f",&p,&r,&t);
    // printf("Simple interest is %f\n",(p*r*t)/2);

    //Compound Interest
    float A;
   
    printf("Amount with compound interest will be A= %f  \n",p*pow((1+(r/100)),t));
    A=p*pow((1+(r/100)),t);
    printf("So Compound interest will be %f", A-p);


    return 0;
}