# include <stdio.h>
int main()
{
    printf("\nThis program will check whether given no is divisivble by 97 or not");
//    float a=194,b;
//    printf("\nEnter the number");
  
//    b=194%97;
//    printf("\nRemainder is b %f",b);

     int a;
     printf("\n Enter the number");
     scanf("%d",&a);
   
    if(a%97==0)
    {
        printf("\nGiven no is divisible by 97");

    }
    else{
        printf("Given no is not divisible by 97");
    }

    return 0;
}