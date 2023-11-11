#include <iostream>

using namespace std;

int main()
{
    double x,y;
  x=2;
  y=x++;
  cout<<x<<y<<endl;

  x=2;
  y=++x;
  cout<<x<<y<<endl;

  x=2;
  y=2*x++;
  cout<<x<<y<<endl;

  x=99;
  if(x++<100)
    cout<<"It is true\n";
  else
    cout<<"It is false\n";

  x=0;
  if(++x)
    cout<<"It is true\n";
  else
    cout<<"It is false\n";


    return 0;
}
