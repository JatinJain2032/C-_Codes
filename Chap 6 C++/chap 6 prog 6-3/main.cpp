// This prog uses three fun: main, first and second, in this we are not using fun prototype

#include <iostream>

using namespace std;

void first()
{
    cout<<" I am now inside fun first"<<endl;

}
    void second()
    {
        cout<< " I am now inside the fun second"<<endl;

    }
    int main()
    {
    cout<<" I am starting in fun main"<<endl;
    first();  // calling the fun first
    second();  // calling the fun second
    cout<< "Back  in function main again"<<endl;

    return 0;
}
