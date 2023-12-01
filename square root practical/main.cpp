#include <iostream>
#include <cmath>
using namespace std;

int main()
{
     double n, p, N,s,y;
    // N= new_approx;
     // p=prev_approx;
    cout<<"Enter any number whose sq. root you want"<<endl;
    cin>>n;
    cout<<"Guess the approx sq. root of entered number"<<endl;
    cin>>p;

    do
    {
        N=(p+n/p)/2;
        y=N-p;
    }
    while (abs(y)<=0.000001);
    cout<<" The new approx sq. root of entered number is"<<N<<endl;

    return 0;
}
