#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   int num, x;
   srand(time(0));
   x=rand()%100;
   cout<<"guess the number "<<endl;
   cin>>num;

   while(num!=x)
   {
       if (num<x)
        cout<<"too small, try again"<<endl;
       if(num>x)
        cout<<"too big, try again.\n";
       cin>>num;
   }
   if (num=x)
    cout<<"Your answer is correct!"<<endl;
    return 0;
}
