# include <stdio.h>

//we have to find that entered year is leap year or not
// lear year is totally divisible by 4 so remainder will be 0
int main()
{
    int y,remainder;
    printf("Enter a year in yyyy format:");
    scanf("%d",&y);
    remainder=y%4;
    if(remainder==0)
    {
        printf("year %d is a leap year",y);
    }
    else
    {
        printf("year %d is not a leap year",y);
    }

    return 0;
}