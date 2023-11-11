// This prog demonstrate the nested if stat
#include <iostream>

using namespace std;

int main()
{
    char employed,// currently employed Y or N
        recentgrade;//recent graduate Y or N

        // is the user employed or recent graduate
        cout<<"Answer the following question with either Y for  Yes  or N for No"<<endl;
        cout<<"Are you employed?";
        cin>>employed;
        cout<<"Have you graduated from college in the past two years";
        cin>>recentgrade;

        // Determine the user loan qulification
        if(employed=='Y')
        {
            if(recentgrade=='Y')// Nested if
            {
                cout<<"You qulify for the special";
                cout<<"interest rate"<<endl;
            }
        }

    return 0;
}
