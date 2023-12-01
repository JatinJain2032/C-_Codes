#include <stdio.h>

// int func1(int a, int b)
// {
//     int sum;  // int sum and auto int sum is same. if we print only sum and give it any value then it will show garbage value(i.e. unitialized value is garbage)
//     sum=a+b;
//     return sum;
// }

// int  main()
// {
//    int sum=func1(3,5);
//    printf("the value of sum is %d",sum);  It will show sum is 8
//}

// Using the extern keyword, we inform our compiler that the variable is already declared at some other place. 
// By doing so, we can use the same variable with the same space, without allocating its new memory and accessing the same variable in some other file.


//int sum=89;  we can declare it here also
int func1(int a, int b)
{
  extern int sum;  // int sum and auto int sum is same. if we print only sum and give it any value then it will show garbage value
 // it is like globle varible
   // sum=a+b;
    return sum;
}
 // now we want this to be  print on the screen so we will use 'extern'
 int sum=89;  // we have declared varibel here so in above fun we have to use extern
int  main()
{
   int sum=func1(3,5); // output will be 8 beacuse we are passing 3 & 5 . but we want to print sum=89 so we will use extern
   printf("the value of sum is %d",sum);

   //for extern and static varibel unitialized value is 0.
}

