#include <iostream>

using namespace std;

int main()
{
    int a,b,c,choice;

    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;



    cout<<"This prog perform the following operations"<<endl;
    cout<<"Addition"<<endl;
    cout<<"Subtraction"<<endl;
    cout<<"Multiplication"<<endl;
    cout<<"Division"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:  c=a/b;
            cout<<"addition of two no will be"<<c<<endl;


                  break;

        case 2: cout<<"subtraction of two no will be"<<c<<endl;
               c=a-b;
               break;
    }
    return 0;
}
