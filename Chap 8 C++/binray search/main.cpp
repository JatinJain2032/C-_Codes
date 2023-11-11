//This prog  demostrate the binarySearch function.
#include <iostream>

using namespace std;

//Function prototype
int binarySearch(const int [],int , int);
const int size=20;

int main()
{
    //Array with employee IDs stored in ascending order
    int idNums[size]={101,142,147,189,199,222,234,289,296,310,319,388,394,417,429,447,521,536,600};
    int results;
    int empID;

    //get an employee ID
    cout<<"Enter the employe ID you wish to search for"<<endl;
    cin>>empID;

    //search for ID
    results= binarySearch(idNums,size, empID);

    if(results==-1)
        cout<<"Enter no does not exist"<<endl;
    else
    {
     cout<<"That ID is found at element"<<results<<"in the array"<<endl;
    }
    return 0;
}

int binarySearch(const int array[], int size, int value)
{
    int first=0, //First array element
    last = size-1, //Last array element
    middle,  //midpoint of the search
    position= -1; //position of search value
    bool found = false; // Flag

    while(!found && first<=last)
    {
        middle= (first+last)/2;
        if(array[middle]==value) //If value is found at middle
        {
            found=true;
            position=middle;
        }
        else if (array[middle]>value) //If the value is in lower half
            last=middle-1;
        else
            first=middle+1; //IF value is in upper half
    }
    return position;
}



