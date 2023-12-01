#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double pi=0;
    int x=1;
    for (int n=1; n<=1000; n++)
    {
        pi= pi+x*(4.0/((n*2)-1));
        x=-x;
        cout<<"\t"<<pi<<"\t";
    }
    cout<<fixed<<setw(8)<<setprecision(10);
    cout<<"\n\nApproximate value of pi is:"<<pi<<endl;
    return 0;
}
