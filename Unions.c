#include <stdio.h>
#include <string.h>

union student 
{
    int id;
    float marks;
    char fav_char;
   char str[20];
};

int main()
{
   
   union student s1;
   s1.id=2;
   s1.marks=30.5;
   s1.fav_char='j';
   strcpy(s1.str ," Jatin");

   printf("\nThe id of student is %d\n",s1.id);
   printf("The marks of student is %f\n",s1.marks);
   printf("The fav_char of student is %c\n",s1.fav_char);
   printf("The str of student is %s\n",s1.str);

   printf("\nsize of id is %d\n",sizeof(s1.id));
   printf("size of marks is %d\n",sizeof(s1.marks));
   printf("size of fav_char is %d\n",sizeof(s1.fav_char));
   printf("size of string is %d\n",sizeof(s1.str));
   return 0;
}