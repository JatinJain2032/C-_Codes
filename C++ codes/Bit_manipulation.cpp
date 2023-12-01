#include <iostream>

 using namespace std;

int getbit(int n, int pos)
{
    return((n&(1<<pos))!=0);
}

int setbit(int n, int pos)
{
    return( n|(1<<pos));
}

int clearbit(int n, int pos)
{
    int mask=~(1<<pos);
    return (n&mask);
}
int main()
{
    cout<<getbit(5,2)<<endl; // we want to find the bit which at the second place of binary form of 5
    cout<<setbit(5,1)<<endl; // we want to make bit 1 at the 1st position of binary form of 5
    cout<<clearbit(5,2)<<endl; // we want to clear bit at the 2nd position of binray form of 5
    return 0;
}