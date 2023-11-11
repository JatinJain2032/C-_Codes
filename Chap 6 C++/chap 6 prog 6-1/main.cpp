#include <iostream>

using namespace std;

// This prog has two function : main and displaymessage.

//Defination of function displaymessage
//this fun display a greeting.

void displaymessage()
{
    cout<<"Hello from the function displaymessage.\n";
}
// Function main()
int main()
{
   cout<<"Hello from main.\n";
   displaymessage();   //calling fun
   cout<<"Back in function main again"<<endl;

    return 0;
}
