#include <iostream>

using namespace std;

int main()
{
    int n, s1=0, s2= 1, nextTerm=0;
    cout<<"Enter the no. of terms:" <<endl;
    cin>>n;

    cout<<"Fibonacci series:";
    for (int i=1; i<=n; ++i)
    {
        if (i==1)
        {
            cout<<s1<<endl;
            continue;
        }
        if(i==2)
        {
            cout<<s2<<endl;
            continue;
        }
        nextTerm= s1+s2;
        s1=s2;
        s2=nextTerm;
        cout<<nextTerm<<" ";
    }
    return 0;
}
