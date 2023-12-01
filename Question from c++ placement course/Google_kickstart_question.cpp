#include <iostream>

 using namespace std;
/* 8.4- Question- An arithmetic array is an array that contains at least two integers and the
differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3],
and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
not arithmetic arrays. */

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int ans=2;
    int pd=a[1]-a[0];
    int j=2;
    int curr=2;

    while(j<n)
    {
        if(pd==a[j]-a[j-1])
        {
            curr++;
        }

        else
        {
            pd=a[j]-a[j-1];
            curr=2;
        }

        ans=max(ans,curr);
        j++; 
    }

    cout<<ans<<endl;

     return 0;
}