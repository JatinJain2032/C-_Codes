#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   long double sin=0.0,x, cos=0.0;

   cout<<"Enter the value of x"<<endl;
   cin>>x;

   x=x*3.14159/180;

   for (int n=0; n<=6; n++)
   {
       sin+=(pow (-1,n)*pow (x,2*n+1))/tgamma(2*n+1+1);
       cos+=(pow(-1,n)*pow(x,2*n))/tgamma(2*n+1);
   }
   cout<<setprecision(8);
   cout<<"The value of sin is "<<sin<<endl;
   cout<<"The value of cos is"<<cos<<endl;
    return 0;
}
