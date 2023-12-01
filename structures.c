#include <stdio.h>
#include <string.h>

// Structures are used to store a large amount of data.
// They are used to send data to the printer.
// For placing the cursor at an appropriate position on screen, we can use structure.
// It can be used in drawing and floppy formatting.
// We use structures in finding out the list of equipment attached to the computer
struct Student
{
    int id;
    int marks;
    char name[34];

}  jatin , shani, bipin;

// or we can write here alos like this- "struct student jatin, bipin,shani"

struct book {
char title[20];  
char Author_name[100];  
float price;  
int pages;
} ;

int main()
{
   jatin.id=1; // we can write this as jatin={1,40, "jatin is a good boy"};
   bipin.id=2;
   shani.id=3;
   jatin.marks=40;
   bipin.marks=50;
   shani.marks=60;
   strcpy(jatin.name,"jatin is a good boy");
   strcpy(bipin.name,"bipinn is a good boy");
   strcpy(shani.name,"shani is a good boy");
   
   printf("jatin got %d marks\n",jatin.marks);
   printf("bipin got %d marks\n",bipin.marks);
   printf("shani got %d marks\n",shani.marks);

   printf("jatin got %d id\n",jatin.id);
   printf("bipin got %d id\n",bipin.id);
   printf("shani got %d id\n",shani.id);

   printf("jatin got %s name\n",jatin.name);
   printf("bipin got %s name\n",bipin.name);
   printf("shani got %s name\n",shani.name);

   
struct book book1 = { "Cprogramming", "ABC", 130.00, 550 } ;
printf ( "\n Title = %s", book1.title ) ;
printf ( "\n Name = %s", book1.Author_name ) ;
printf ( "\n Price = %.2f",book1.price ) ; 
printf ( "\n Pages = %d", book1.pages ) ;


   return 0;

}

