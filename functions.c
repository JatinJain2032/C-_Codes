#include <stdio.h>

void display1();  // function prototype
void display2();
void display3();

int main()
{
     printf("Hello\n");
    display1(); // fucntion call
    display2();
    display3();
   

}

void display1()    //function defination
{
    printf("Good morning\n");
}

void display2()
{
    printf("Good Afternoon\n");
}

void display3()
{
    printf("Good night\n");
}
