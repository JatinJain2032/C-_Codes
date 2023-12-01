#include <iostream>
#include <algorithm>
#include <string>

 using namespace std;


int main()
{
    // stirng fucntions

    string s1,s2;
    s1="Namah";
    s2="Shivay";
    
    //1. append(): add two or more strings
    s1.append(s2); //or we can use s1=s1+s2
    cout<<s1<<endl;

    // 2. assign: assign new value to a given string

    string s3="Jatin";
    s3.assign("JatinJain"); //or we can dirtectly change s3="JatinJain"
    cout<<s3<<endl;
    
    //3. at(): returns character of a particular string
    string s4="Mahadev";
    cout<<s4.at(2); // or we can use cout<<s4[2]<<endl;

    // 4. claer(): Erase all the content of the strings
    s4.clear();
    cout<<s4<<endl;

    /* 5. compare(): Compares the value of the string with the string passed in the
parameter and returns an integer accordingly. */

    string  s5="abc", s6="xyz";
    cout<<s6.compare(s5)<<endl; // if output is greater than 0 then s6 is greater than s5
    // and if output is less than 0 then string is smaller than compared string

    string s7="abc", s8="abc";
    cout<<s8.compare(s7)<<endl; // if output is 0 then both the stirngs are equal

    // 6. empty(): it tells us that given string is empty or not
    string s9="Mumbai";
    if(s9.empty())
    cout<<"Given stirng is empty"<<endl;
    else
    cout<<"Given string is not empty"<<endl;

    //7. erase(): erase whichever element we want to erase

    string s10="nincompoop";
    s10.erase(3,3); // first no is from where we want to delete and second is how many characters we wnat to delete
    cout<<s10<<endl;

    //8.find(): to find a perticular char. in the string
     string s11="nincompoop";
    cout<<s11.find("com")<<endl; // it will give the position of the first character

    //9. insert(); insert anything at everywhere in given string
     string s12="jatin";
     s12.insert(2, "jain");
     cout<<s12<<endl;
     
     // 10. length(): returns the length of the string
     string s13="India";
     cout<<s13.length()<<endl; // or we can use size functino also in same way

     //11. resize():  Resize the string to the new length which can be less than or gretater than the current length
     string s14="Orange";
     s14.resize(4);
     cout<<s14<<endl;

    //12.substr(): Returns a string which is the copy of the substring.
     string s15="JayHind";
     cout<<s15.substr(3,4)<<endl;

      //13. stoi(): strings converted to data type
    string s16="786";
    int x=stoi(s16);
    cout<<s16<<endl;
    cout<<x+2<<endl; // it will add 2 to the string

    //14. to_string(): to convert interger to a string
    int y=786;
    cout<<to_string(y)<<endl;

    // sort(): to sort a string character
    string s17="dsgnfdkjgrk";
    sort(s17.begin(),s17.end());
    cout<<s17<<endl;

    


     return 0;
}