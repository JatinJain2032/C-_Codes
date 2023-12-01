#include <stdio.h>
/* The case at which the function doesn’t recur is called the base case.
The instances where the function keeps calling itself to perform a subtask i.e. solving problem by dividing it in small parts, is called the recursive case.
*/
int factorial(int number)
{
    if (number == 1 || number == 0)  // base case
    {
        return 1;
    }

    else
    {
        return (number * factorial(number - 1));  //recursive case
    }
}

int main()
{
    int num;
    printf("Enter the number you want the factorial of\n");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, factorial(num));

    return 0;
}