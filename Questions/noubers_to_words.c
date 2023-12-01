# include <stdio.h>


int main()
{
    long int n,sum=0,r;

    printf("Enter the number:");
    scanf("%ld",&n);

    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }

    n=sum;
    while(n>0)
    {
        r=n%10;

        switch(r)
        {
            case 1:
            printf("one\t");
            break;

            case 2:
            printf("Two\t");
            break;
             
            case 3:
            printf("Three\t");
            break;
             
             case 4:
            printf("Four\t");
            break;

            case 5:
            printf("Five\t");
            break;

            case 6:
            printf("Six\t");
            break;

            case 7:
            printf("Seven\t");
            break;

            case 8:
            printf("Eight\t");
            break;

            case 9:
            printf("Nine\t");
            break;

            case 0:
            printf("Zero\t");
            break;        

        }

        n=n/10;
    }
    return 0;
}