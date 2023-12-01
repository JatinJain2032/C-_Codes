#include <iostream>

using namespace std;

int main()
{
    int a,b,c, choice;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;


    cout<<"What kind of operation you want to perform"<<endl;
    cout<<" addition"<<endl;
    cout<<"subtraction "<<endl;
    cout<<"multiplication"<<endl;
    cout<<" division"<<endl;
    cout<<"remainder"<<endl;

    cin>>choice;
    if(a>>0 && b>>0)
    {
        switch(choice)
        {
            case 1:
            {
                c=a+b;
            cout<<"adding the two no."<<c<<endl;
            break;
            }
            case 2:
            {
                c=a-b;
            cout<<"subtracting the two no."<<c<<endl;
            break;
            }
            case 3:
            {
                c=a*b;
            cout<<"Multiplying the two no."<<c<<endl;
            break;
            }
            case 4:
            {
                c=b/a;
            cout<<"dividing the two no."<<c<<endl;
            break;
            }
            case 5:

            {
                cout<<"dividing the two no."<<c<<endl;
            break;
            }

        }
    }
    else
        cout<<"entered no. are invalid.\n";

    return 0;
}
