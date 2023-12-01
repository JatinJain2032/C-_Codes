#include <stdio.h>

int main()
{
    int num, intern;
    printf("Enter your marks in nubers if it is 80 or above 80 and no of internship you have done if your marks is 85");
    scanf("%d", &num);
     scanf("%d", &intern);

    switch (num)
    {
    case 80:
     printf("congratulations! you are getting 4500 Rs.");
     break;

     case 85:
     printf("congratulations! you are getting 5000 Rs\n.");
     switch (intern)
     {
     case 2:
     printf("you are getting 3000 more");
     }
     break;

    case 90:
     printf("congratulations! you are getting 5500 Rs.");
     break;

     case 95:
     printf("congratulations! you are getting 8500 Rs.");
     break;
    
    case 9896:
     printf("congratulations! you are getting 12000 Rs.");
     break;

     default:
    printf
     ("Sorry you can try after 3 months");
    }

    

    return 0;
} 