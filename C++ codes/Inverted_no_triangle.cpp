#include <iostream>

 using namespace std;


int main()
{
    int n;
    cout<<"Enter a no of up to which you want a triangle"<<endl;
    cin>>n;

    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }

        cout<<endl;
    }
     return 0;
}