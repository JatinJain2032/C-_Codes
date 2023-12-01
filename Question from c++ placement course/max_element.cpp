#include <iostream>

 using namespace std;
// 8.4-we will find the maximum element as we procced further in the array

int main()
{
    int mx=-1999999;
    int n;
    int a[n];
    cin>>n;
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }

      for(int i=0;i<n;i++)
      {
          mx=max(mx,a[i]);
          cout<<mx<<endl;
      }
     return 0;
}