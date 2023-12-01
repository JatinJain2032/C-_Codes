#include <iostream>

 using namespace std;

void dectobinary(int num)
{
    int binarynum[10];
    int i=0;
     while(num>0)
    {
        binarynum[i]=num%2;
        num/=2;
        i++;
    }

    for(int j=i-1;j>=0;j--)
    {
        cout<<binarynum[j];
    }
}
int main()
{
    int n;

   cin>>n;
   dectobinary(n);
   
   
     return 0;
}