// This program will convert the seconds to minutes and seconds.
#include <iostream>

using namespace std;

int main()
{
    int totalseconds= 125;
    int minutes, seconds;

    minutes= totalseconds/60;
    seconds= totalseconds%60;

    cout<< totalseconds<< "seconds is equivalent to:\n";
    cout<<"Minutes:"<<minutes<<endl;
    cout<<"Seconds:"<<seconds<<endl;
    //Here line 17 calculates the number of reamining seconds. There are 60 seconds in a minute, so this statement uses the % operator to
    // divide the total seconds by 60, and get the remainder of the division.
    return 0;
}
