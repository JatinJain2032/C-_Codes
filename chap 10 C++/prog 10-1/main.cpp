//This prog demonstrate the some character testing function
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char input;
    cout<<"Enter any character"<<endl;
    cin.get(input); // we can use only input
    cout<<"The character you entered is:"<<input<<endl;
    if(isalpha(input))
        cout<<"That's an alphabetic character"<<endl;
    if(isdigit(input))
        cout<<"That's a numeric digit"<<endl;
    if(islower(input))
        cout<<"That's a  lowercase letter"<<endl;
    if(isupper(input))
        cout<<"That's a uppercase letter"<<endl;
    if(isspace(input))
        cout<<"That's a whitespace character"<<endl;

    return 0;
}
