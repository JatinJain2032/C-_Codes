# include <stdio.h>

//function poiter syntax
//function_return_type(*Name_of_pointer)(function arguments list)
int sum (int a ,int b)
{
    return a+b;
}


int main()
{
    printf("THe sum of 1 and 2 is %d\n",sum(1,2));
    int(*fptr)(int,int);//Declaring a function pointer
    fptr=&sum;// creating a function pointer
    int d=(*fptr)(4,6);// Dereferncing a function pointer
    printf("The value of d is %d\n",d);
    return 0;
}