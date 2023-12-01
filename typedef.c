#include <stdio.h>
 //syntax is given below
 // typedef <previous_name> <alias_name>;
 //for structure syntax is:  typedef  <previous_name>
                            // {
                            //     contain of structure
                            // }<alias_name>;

typedef struct Student   
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;

int main()
{
     std s1, s2;
    s1.id = 56;
    s2.id = 89;
    printf("Value of s1's Id is %d\n", s1.id);
    printf("Value of s2's Id is %d\n", s2.id);

    // int *a, b;
    typedef int* intPointer;
    intPointer x, y;
    int c = 89;
    x = &c;
    y = &c;

    typedef unsigned long ul;
            ul a = 5, b = 8;
            printf("a = %d\n", a);
            printf("b = %d\n", b);
    return 0;
}

    


           
