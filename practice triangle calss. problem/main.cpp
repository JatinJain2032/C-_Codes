#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cout<<"enter the vlaue of side a.\n";
    cin>>a;
    cout<<"enter the vlaue of side b.\n";
        cin>>b;
    cout<<"enter the vlaue of side c.\n";
    cin>>c;
   {


    if(a+b>=c && a+c>=b && b+c>=a)
    {
        if(a=b &&b==c && a==c)
            cout<<"the triangle is equilateral"<<endl;
        else if (a==b|| b==c || a==c)
        cout <<"the triangle is isoceles"<<endl;
        else
            cout<<"the triangle is scalene"<<endl;
    }
    else
        cout<<"the triangle cannot be formed"<<endl;
   }
    return 0;
}
