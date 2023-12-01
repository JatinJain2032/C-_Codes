#include <stdio.h>

int main()
{
    // first we will write format specifier
    float f= 3.142;
    int d=5;
    char c= 'A';
    char str[] =  "My name is Jatin";

    printf(" \nthe value of intefer is %d",d);
    printf(" \nthe value of float is %f",f);
    printf(" \nthe value of char is %c",c);
    printf(" \nthe value of string is %s",str);
    // we can write float and int in this way alos
     printf(" \nthe value of float is %50.14f",f);
      printf(" \nthe value of integer is %10d",d);


   




    return 0;

}