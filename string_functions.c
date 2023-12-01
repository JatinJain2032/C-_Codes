#include <stdio.h>
#include <string.h>

int main()
{
    //strcat-used to add two strings
    char s[]="Hello";
    char t[]="Jatin";
    printf("\nadded string is %s\n",strcat(s,t));
   // or we can use this also puts(strcat(s,t));

 // strlen-counts the no of characters present in string

 char str[]="Jatin Jain";
 int str_length=strlen(str);
 printf("\nlength=%d\n",str_length);

 //strcpy-copies the content of one string to another
 char  p[ ] = "CodeWithHarry" ;
char  r[20] ;
strcpy ( r, p ) ;
printf ( "\n Source string = %s", p) ;
printf ( "\n Target string = %s", r) ;

/*strcmp( ):-
This function is used to compares two strings to find out whether they are same or different. 
The strcmp() will compare two strings character by character until there is a mismatch or end of one of the strings is reached. 
If both of the strings are identical, strcmp( ) returns a value zero. If they are not identical, 
it will return the numeric difference between the ASCII values of the first non-matching pairs of characters. Here is a example of strcmp( ).
*/

char b[]="Computer";
char c[]="code";
int a;
a=strcmp(b,c);
printf("\n %d",a);

//strrev-used to show the reverse of the string
char z[]="12345";
printf("After reversing string is= %s", strrev(z));

return 0;

}

