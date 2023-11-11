//THis prog use & operator to find size of a varible's address and the sizeof for its size
#include <iostream>

using namespace std;

int main()
{
    int x=20;
    cout<<"the address of x is"<<&x<<endl;
    cout<<"the size of x is "<<sizeof(x)<<"bytes"<<endl;
     cout<<"the value in x is"<<x<<endl;
     return 0;
}
