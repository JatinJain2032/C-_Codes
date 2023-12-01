#include <iostream>

 using namespace std;
// 8.4-Question- Given an array a[] of size n. Output sum of each subarray of the given array.
int main()
{
    int n;
    cin>>n;
    int a[n];
    int curr=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        curr=0;
        for(int j=i;j<n;j++)
        {
           curr+=a[j];
           cout<<curr<<endl;
        }
    
    }
     return 0;
}