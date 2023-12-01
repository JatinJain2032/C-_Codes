#include <stdio.h>
#include <string.h>
 
union Data {
   int i;
   float f;
   char str[20];
};
union Book {
   int pages;
   float price;
   char title[20];
};
 
int main( ) {

   union Data data;        

   data.i = 10;
   data.f = 220.5;
   strcpy( data.str, "C Programming");

   printf( "data.i : %d\n", data.i);
   printf( "data.f : %f\n", data.f);
   printf( "data.str : %s\n", data.str);

   //output will be
//    data.i : 1917853763
// data.f : 4122360580327794860452759994368.000000
// data.str : C Programming
// Here, we can see that the values of i and f members of union got corrupted because the final value assigned to the variable has occupied 
// the memory location and this is the reason that the value of str member is getting printed very well.

union Book b1;       
   b1.pages = 100;
   printf( "Pages: %d\n", b1.pages);
   b1.price = 250.5;
   printf( "Price : %.1f\n", b1.price);
   strcpy( b1.title, "C Programming");
   printf( "Title : %s\n", b1.title);

//    output will be
//    Pages: 100
// Price : 250.5
// Title : C Programming
// Here, all the members are getting printed very well because one member is being used at a time.

   return 0;
}