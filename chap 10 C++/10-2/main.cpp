//This prog tests a customer number to determine whether it is in proper format
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
   const int size=8;
   char customer[size];

   //Get the customer number
   cout<<"Enter the customer number in the form LLLNNNN (LLL=letters and NNNN=numbers)"<<endl;
   cin.getline(customer ,size);

   //Determine whether it is valid.
   if(testnum(customer , size))
        cout<<"That's a valid customer number"<<endl;
   else
   {
       cout<<"That is not the proper format of the customer number.\nHere is an example"<<endl;
       cout<<" ABC1234"<<endl;
   }
    return 0;
}
//Defination of the function testnum.
 bool testnum(char custnum[] , int size)
 {
     int count; // Loop counter

     //Test the first three characters for alphabetic letters.
     for(count=0; count<3; count++)
     {
         if(!isalpha(custnum[count]))
            return false;
     }
     //Test the remaining three chracters for numeric digits
     for(count=3; count<size-1; count++)
     {
         if(!isdigit(custnum[count]))
          return false;

     }
     return true;
 }
