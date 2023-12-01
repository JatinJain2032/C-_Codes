// Definition:
// A command-line utility is a way of giving operating system instructions using lines of texts. 
// Command-line programs operate via command line or PowerShell. It will interact with a command-line script.
// Advantages of using command-line utility:
// Coming towards the part of why we should use the command-line utility in our program. We can call a command line program in python or 
// any other language into a different language program quickly as each program has calling support in it for calling the command lines program. 
// So in cases where we are writing a program in some other language, but we want to perform a task in C and call it in our program, 
// then the command line can help us do that.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n", argc);
  
         for (int i = 0; i < argc; i++)
    {
        printf("This argument at index number %d has a value of %s \n", i, argv[i]);
    }
    
    return 0;
}

