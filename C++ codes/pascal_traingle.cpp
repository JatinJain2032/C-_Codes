#include <iostream>

 using namespace std;

//  1 
// 1 1 
// 1 2 1 
// 1 3 3 1
// 1 4 6 4 1

int fact(int num)
{
 int factorial=1;
   for(int k=2;k<=num;k++)
   {
       factorial*=k;
   }

   return factorial;
}

int main()
{
    int n;
     cin>>n;

     for(int i=0;i<n;i++)
     {
         for(int j=0;j<=i;j++)
         {
             int ans=fact(i)/(fact(j)*fact(i-j));
             cout<<ans<<" ";
         }

         cout<<endl;
     }
     return 0;
}