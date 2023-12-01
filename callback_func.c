# include <stdio.h>

int sum (int a, int b)
{
    return a+b;
}

int average(int c, int d)
{
    int add=c+d;
    return (add/2);
}

void greetHelloAndExecute(int (*fptr)(int,int)) // this function is taking a fun pointer which take interger and return integer so that when we call fun it can execute 
{
    printf("Hello user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));//  callback to sum function
}

void greetGmAndExecute(int (*fptr)(int, int)){
    printf("Good Morning User\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7)); //  callback to sum function
}

void greetGoodeveningExecute(int (*fptr2)(int, int))
{
    printf("Good Evening User\n");
    printf("The avg of 4 and 6 is %d\n",fptr2(4,6)); //  callback to average function
}

void greetGoodenightExecute(int (*fptr2)(int, int))
{
    printf("Good night User \n");
    printf("The avg of 4 and 6 is %d\n",fptr2(4,6)); //  callback to average function

}


int main()
{
    int(*fptr)(int,int);//declaring function pointer
    fptr=sum;
    greetHelloAndExecute(fptr);
    int(*fptr2)(int,int); // declaring another fun pointer
    fptr2=average;
    greetGoodeveningExecute(fptr2);

    return 0;
}