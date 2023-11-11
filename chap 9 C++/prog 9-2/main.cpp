//THis prog  stores the address of a vriable in a pointer
#include <iostream>

using namespace std;

int main()
{
    int x=25;
    int *ptr = NULL; //Pointer variable can point to an int,  we can use 0 also instead of NULL

    ptr=&x; //strores the adress of x in ptr
    cout<<"the value in x is"<<x<<endl;
    cout<<"the address of x is"<<ptr<<endl;
    return 0;
}
