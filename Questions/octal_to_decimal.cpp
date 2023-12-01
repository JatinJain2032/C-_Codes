#include <iostream>

 using namespace std;

int binarytodecimal(int num)
{
    int ans=0;
    int base=1; //for 2^0=1
     
     while(num>0)
     {
        int y=num%10; 
        ans=ans+y*base; 
        base*=8;
        num=num/10;
     }

     return ans;
}

int main()
{
    int num;

    cin>>num;

    cout<<binarytodecimal(num);

     return 0;
}