#include <iostream>

using namespace std;

int main()
{
    const float fr= 2.000004e10;
    const float fe= 2e10;

    float v = (6.685e10*((fr-fe)/(fr+fe)));
    cout<< "the speed is"<< v <<"meter per second."<<endl;
    return 0;
}
