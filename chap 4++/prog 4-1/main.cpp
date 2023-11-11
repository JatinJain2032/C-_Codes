//This prog demostrate the vlaue of true and false stat
#include <iostream>

using namespace std;

int main()
{
    bool truevalue, falsevalue , truestat, falsestat;
    int x=5, y=10;
    char A,B;

    truevalue= x<y;
    falsevalue= y==x;

    truestat=A<B;
    falsestat=A>B;

    cout<< "True is "<<truevalue<<endl;
    cout<<"False is "<<falsevalue<<endl;

    cout<<"\nTrue is"<<truestat<<endl;
    cout<<"false is"<<falsestat<<endl;

    return 0;
}
