#include <iostream>

using namespace std;

int main()
{
    int x, y, num;

    cout<<"Enter the integer whose sq. pattern which is less than 15.\n";
    cin>>num;

    for(x=num; x>=1; x--)
    {
        for (y=num; y>=1; y--)
        {
            cout<<"+ ";
        }
        cout<<endl;
    }
    return 0;
}
