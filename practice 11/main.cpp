#include <iostream>

using namespace std;

int main()
{
   //this program will display the total annual pay of the employee.
   double payamount, payperiod, annualpay;
   payamount= 2200;
   payperiod= 26;
   annualpay = payamount*payperiod;

   cout<<"the pay amount of an employee for a single period is"<<payamount<<endl;
   cout<<"the pay period of an employee  in a year is"<<payperiod<<endl;
   cout<<"the annual pay of an employee will be"<<annualpay<<endl;
    return 0;
}
