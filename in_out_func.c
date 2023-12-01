#include <stdio.h>

// Opening a File:
// We use the fopen() function for opening files in C.

// r: opens a file for reading.
// w: opens a file for writing. It can also create a new file.
// a: opens a file for appending.


// Syntax:

// ptr = fopen(“file_location”,”mode”);
// Example:
// ptr = fopen(“D:\\file.txt”,”w”);

// Closing a File:
// Closing an open file is one of the most crucial steps while dealing with C. Files does not automatically get closed after working with them. We have to close them manually. To close a file, we have to use the fclose() function. The syntax is straightforward because we just have to send the pointer as a parameter to the function.
// Syntax:
// fclose(fptr);

//reading a file
// ptr = fopen(“D:\\file.txt”,”r”);

//writing a file
//ptr = fopen(“D:\\file.txt”,”w”);



int main()
{
    // FILE*ptr=NULL;
    // char string[40];
    // ptr=fopen("random.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content of this file has %s\n",string);
   
   
    // FILE*ptr=NULL;
    // char string[50]="This content is produced by in_out_func";
    // ptr=fopen("random.txt","w");
    // fprintf(ptr,"%s",string);
    // fclose(ptr);

    //to append a file
    // ptr=fopen("random.txt","a"); //it will add sting to the same file without erasing prev statment
    // fprintf(ptr,"%s",string);
     //fclose(ptr);

     //From here put and get functions are starting

     FILE *ptr = NULL;
    ptr = fopen("random.txt", "r"); 
    char c = fgetc(ptr);   //reads the character
    printf("The character I read was %c\n", c );
    c = fgetc(ptr);
    printf("The character I read was %c\n", c );
    char str[34];
    fgets(str,3,ptr); //reads the string
    printf("The string is %s\n",str);


    //   FILE *ptr = NULL;
    // ptr = fopen("random.txt", "r+"); //it will replace only that much character which it want to write
    // fputc('O',ptr);
    // fputs("this is jatin",ptr);
     
     
    //  FILE *ptr = NULL;
    // ptr = fopen("random.txt", "w"); 
    // fputc('O',ptr);
    // fputs("this is jatin",ptr);

    //  FILE *ptr = NULL;
    // ptr = fopen("random.txt", "w+"); // it will first empty complete file then write
    // fputc('O',ptr);
    // fputs("this is jatin",ptr);

    
    //   FILE *ptr = NULL;
    // ptr = fopen("random.txt", "a+"); // it will only add to the prev written thing
    // fputc('O',ptr);
    // fputs("this is jatin",ptr);
   fclose(ptr);


   //similarly we can use a fgetc and fgets fun in a+ 


    return 0;
}