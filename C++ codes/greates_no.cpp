#include <iostream>

 using namespace std;


int main()
{
    int a,b,c,d;
    cout<<"Enter four different numbers and I will tell you which one is largest:";
    cin>>a>>b>>c>>d;

    if(a>b && a>c && a>d)
    {
       cout<<"largest no is"<< a<<endl;
    }

    if(b>c && b>a && b>d)
    {
        cout<<"largest no is "<< b<<endl;
    }

    if(c>b && c>a && c>d)
    {
        cout<<"largest no is "<<c<<endl;
    }

    if(d>b && d>c && d>a)
    {
        cout<<"largest no is "<<d<<endl;
    }
     return 0;
}