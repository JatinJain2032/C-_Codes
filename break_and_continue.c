// break statement is used to come out of the loop
//contonue statement is used to jump to the next iteration of the loop
// The continue stat skips some code inside the loop and continues with the next iteration
//It is manily used for a condition so that we can skip some lines of code for a particular condition

#include <stdio.h>

int main()
{
    int i,age;

    for(i=1;i<10;i++)
    {
        printf("%d Enter your age\n", i);
        scanf("%d", &age);
        if(age<10)
        {
            break;
        }

        if (age>10) // to make continue stat working make break and above comment
        {
            continue;
        }
        printf("we have not come accross any continue statements");
        printf("we have not come accross any continue statements");
        printf("we have not come accross any continue statements");
        printf("we have not come accross any continue statements");
        printf("Harry is a good boy");
    }
}