#include <iostream>

using namespace std;

int main()
{
    double hours=0; minutes=0; sec=0;
    cout<<fixed<<right;
    cout.fill('0');
    for(int hours=0; hours<24; hours++)
    {
        for(int minutes=0; minutes<60; minutes++)
        {
            for(int sec=0; sec<60; sec++)

                cout<<hours.minutes.sec<<endl;

        }
    }
    return 0;
}
