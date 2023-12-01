# include <stdio.h>

int func(int *x, int*y)
{
   
    *x=*x+*y;
    *y=*x-*y;  
}

int main()
{
    int a=3,b=4;
    printf("The value of a  and b  is %d %d\n",a,b);
    func(&a,&b);
    printf("now a is equal to %d and b is equal to %d\n",a,b);
    return 0;
}