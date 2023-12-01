#include <stdio.h>

//there is no gurante that what a uninitailized pointer will return
int main()
{
    int a=45;
    int *ptr =NULL;
    if(ptr!=NULL)
    {
         printf("The value of a is %d",*ptr);  // if we print only this then it will not give us anything, if we print address it will show 0
    }
    else{
        printf("THe pointer is a null pointer and cannot be defined");

        
    }

//     We can initialize the pointer variable without allocating any specific address to it.
// We can use it to check whether a pointer is legitimate or not. We can check that by making the pointer a NULL pointer, after which it can not be dereferenced. 
// It is used for comparison with other pointers to check whether they are pointing to some memory address or not. 
// We use it for error handling in the case of C programming.
// We can pass a NULL pointer at places where we do not want to pass a pointer with a valid memory address.

// NULL pointer vs. Uninitialized pointer:
// The two are different as the Null pointer points to the 0th memory location, which means that it does not occupy any memory location. 
// In contrast, an uninitialized pointer means that the pointer occupies a garbage value. The garbage value can be any value the garbage collector assigns to the pointer,
//  which may point to some memory location.So to be on the safe side, NULL pointers are preferred. 

// NULL pointer vs. Void pointer:
// NULL pointer and void pointer may sound similar to their wordy meanings overlap too much, but they are very different as the NULL pointer is a value, and the void pointer is a type. 
// We will see the meaning of the sentence with the help of an example.
}