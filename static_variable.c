# include <stdio.h>

int func1(int b)
{
    static int myvar=0;  //static variable will not accept ant fun as a value initializer
    // printf("The value of bi is %d\n",b);
    // printf("Here the address of b is %d\n",&b);
    printf("The value of myvar is %d\n",myvar);
    myvar++;

    return b+myvar;
}



int main()
{
    int b=34;
    int val=func1(b);
    printf("1.THe value of b is is %d\n",func1(b));
    val=func1(b);
    printf("2. THe value of b is is %d\n",func1(b));
    val=func1(b);
    printf("3.THe value of b is is %d\n",func1(b));
    val=func1(b);
     printf("4.THe value of b is is %d\n",func1(b));
    // printf("THe value of b is %d\n",b);
    // printf("The value of b from func is %d\n",val);
    // printf("Here the address of b is %d\n",&b);
    return 0;
}