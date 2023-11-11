// This prog demonstrate the use of structures
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Payroll
{
    int empnumber;
    string name;
    double hours,payrate,grosspay;
};

int main()
{
    Payroll employee; //employee is a payroll structures

    cout<<"Get the employee's number:";
    cin>>employee.empnumber;

    cout<<"Enter the employee's name:";
    cin.ignore();
    getline(cin,employee.name);

    cout<<"How many hours did the employee works:";
    cin>>employee.hours;

    cout<<"What is the employee's hourly payrate:";
    cin>>employee.payrate;

    employee.grosspay= employee.hours*employee.payrate;

    //Display the employee data
    cout<<"Here is the employee payroll data"<<endl;
    cout<<"Name:"<<employee.name<<endl;
    cout<<"Hours worked:"<<employee.hours<<endl;
    cout<<"Hourly payrate:"<< employee.payrate<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Gross pay: $"<<employee.grosspay<<endl;
}
