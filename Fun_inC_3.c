// without argumetn and with return value
#include <stdio.h>

int takenumber()
{
    int i;
    printf("Enter a number");
    scanf("%d",&i);

    return i;
}

int main()
{
    int c;
   c=takenumber();
   printf("The number is %d",c);

   return 0;
}

