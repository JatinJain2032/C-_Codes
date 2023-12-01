# include <stdio.h>
#include <stdlib.h>

int* functionDangling()
{
    int a, b, sum;
    a =34;
    b = 364;
    sum = a + b;
    return sum;
}

int main()
{
   // case 1: De allocation of a memory block
   int *ptr=(int*)malloc(7*sizeof(int));
   ptr[0]=34;
   ptr[1]=36;
   ptr[2]=38;
   ptr[3]=40;
   ptr[4]=42;
   free(ptr);// ptr is now a dangling pointer
   printf("%d",ptr[0]);

   //case 2: Function returning local varible address
   int *dangptr=functionDangling(); // dangptr is now a dangling ptr
   printf("%d",*dangptr);
   
   int *danlingptr;
   //case 3: If a variable goes out of scope
   {
       int a=12;

      danlingptr=&a;  //we have defined danlingptr out of scope, so when varible goes out of scope it will destory
// Here variable a goes out of scope which means danglingPtr is pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer
   }
    
    return 0;
}