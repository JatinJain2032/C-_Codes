#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    // // conversion without special character
    // string str="adfgfgrthjtk";

    // for(int i=0;i<str.size();i++)
    // {
    //     {
    //     if(str[i]>='a' && str[i]<='z')
    //      str[i]-=32;
    // }

    // }
    //  cout<<str<<endl;

    //  for(int i=0;i<str.size();i++)
    //  {
    //      if(str[i]>='A' && str[i]<='Z')
    //      {
    //          str[i]+=32;
    //      }
    //  }
    //  cout<<str<<endl;

    //conversion with the help of special function

    string s="sfgfhgjjffg";

    transform(s.begin(),s.end(), s.begin(), ::toupper); // here 1-s.begin is-first itereator of the string, 2-s.end is-end itereator of the string
    //3. s.begin- is for- from where we want to start converison

    cout<<s<<endl;


    transform(s.begin(), s.end(), s.begin(),::tolower);
    
    cout<<s<<endl;
}
