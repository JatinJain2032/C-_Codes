#include <iostream>

 using namespace std;

int combination(int n,int r, int sub)
{
    int factn=1;
    int factr=1;
    int factsub=1;

    for(int i=2;i<=n;i++)
    {
        factn*=i;
    }
    cout<<"factorail of n is-"<<factn<<endl;;

    for(int i=2;i<=r;i++)
    {
        factr*=i;
    }
    cout<<"factorail of r is-"<<factr<<endl;
    for(int i=2;i<=sub;i++)
    {
        factsub*=i;
    }
    cout<<"factorail of sub is-"<<factsub<<endl;
   
    int combination=factn/(factsub*factr);

    return combination;

}

int main()
{
    int n,r;
    cout<<"Enter two no n and r to find nCr:";
    cin>>n>>r;
     int sub=n-r;
    int result=combination(n,r,sub);
    cout<<result;

    
    
     return 0;
}