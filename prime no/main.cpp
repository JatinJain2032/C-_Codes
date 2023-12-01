#include <iostream>

using namespace std;

int main()
{
    int num, a, b=0;
    cout<<"Enter the no."<<endl;
    cin>>num;

    for(a=1; a<=num; a++)
    {
        if ((num%a)==0)
        {
            b++;
        }
    }
    if (b==2)
        cout<<num<<"is a prime no.";
    else
        cout<<num<<"is not a prime no.";
    return 0;
}
