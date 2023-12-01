// This program will calculate the sale price of an item that is reguraly priced  at %59.95, with a 20 percent discount subtracted.
#include <iostream>

using namespace std;

int main()
{
   float regularprice= 59.5, discount , saleprice;

   discount =  regularprice*0.2;
    saleprice = regularprice-discount;

    cout<< "regular price is $"<<regularprice<<endl;
    cout<<"Discount is $"<<discount<<endl;
    cout<<"sale price is $"<<saleprice<<endl;
    return 0;
}
