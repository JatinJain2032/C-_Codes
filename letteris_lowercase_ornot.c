#include<stdio.h>


int main()
{
	 char ch;
	 
	 printf("Enter any character: ");
	 scanf("%c", &ch);
	
	 if(ch>=97 && ch<=122)
	 {
	  	printf("%c is LOWERCASE.", ch);
	 }
	 else
	 {
	  	printf("%c is NOT LOWERCASE.", ch);
	 }
	 
	 
	 return(0);
}