#include <iostream>

 using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;


}

int main()
{
    // int a=10;
    // int *aptr=&a;
   

    // cout<<aptr<<endl; //print a's address
    // cout<<&a<<endl; //print a's address
    // cout<<*aptr<<endl; // print 10, derefrencing the pointer
    // cout<<a<<endl; // print 10

    // *aptr=20; //change the value of a
    // cout<<a<<endl;
    // aptr++; //since int use 4 bit it will increment aptr's address by 4 bit
    // cout<<aptr<<endl; 
    // cout<<a<<endl;

    // aptr--;
    // cout<<aptr<<endl; //decreases aptr address by 4 bit


    // int arr[]={10,20,30,40};
    // cout<<*arr<<endl; //*arr act as a pointer because arr stores addres of a array
    // int *ptr=arr; // we will not use & here because arr itself stroes the address of array

    // for(int i=0; i<3; i++)
    // {
    //     cout<<*ptr<<endl;
    //     ptr++;
    // }
    // //or
    // for(int i=0; i<3; i++)
    // { 
    //     //arr++, we can not write this because it is a constant pointer and we can't increment it
    //     cout<<*(arr+i)<<endl;
    // }

    int a=5, b=10;
     
     int *aptr=&a;
      int *bptr=&b;
    swap(aptr,bptr); // call by reference
    cout<<a<<" "<<b<<endl;

   

     return 0;
}