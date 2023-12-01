#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess,  nguesses;
    srand(time(0));
    number=rand()%100+1;

    do{
        printf("Guess the number less than 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Number is Higher, plz enter another no.\n ");
        }

        else if(guess<number){
            printf("Number is Lower, plz enter another\n");
        }
        else{
            printf("You guessed it in %d attempts\n", nguesses);
        }
    }while(guess!=number);


return 0;
}