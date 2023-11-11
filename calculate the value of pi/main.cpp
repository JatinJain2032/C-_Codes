#include <iostream>
# include <math.h>

using namespace std;

int main()
{
    long double sum=0;
    int n,a;
    cout<<"Enter the number of terms of which you want a series"<<endl;
    cin>>n;
    for (a=1; a<=n;a++)
    {
        sum=sum+pow((1.0/a),a);
    }

    cout<<" Sum of" <<n<<" term is: "<<sum<<endl;
    return 0;
}
