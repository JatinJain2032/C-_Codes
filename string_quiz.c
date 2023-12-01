#include <string.h>
#include <string.h>

int main()
{
   char str1[10];
   char str2[10];
   char str3[]= " is a friend of ";
   char str4[50];
    printf("enter name 1\n");
    gets(str1);
    printf("enter name 2\n");
    gets(str2);
   strcpy(str4,strcat(strcat(str1,str3),str2));
   puts(str4);
}