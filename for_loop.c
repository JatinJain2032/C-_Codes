#include <stdio.h>

int main()
{
    int i,j;
    for(i=0,j=0;i<=6;i++)  // we can use two variables in a loop at a same type
    //and if we intialize any variable outside the loop then we don't have to intialize it inside the loop
    {
        printf("%d %d\n",i,j);
    }
    // exp 2 can have more than one condition. However, the loop will iterate util the  last condition becomes
    //false. Other condition will be treated as statements.
    // exp 2 can perform the task of exp 1 and 2 both itself. That is ,we can initialize the variable as well as update the loop varibale in exp2  itself
    int k,l;
    for(k=0,l=0;l=4,k<=6;k++)
    {
        printf("%d %d\n",k,l);
        l++;
    }
    //expression 1 and 3 are optional i.e. we can define them outside the loop
    //for all exp we can update more than 1 varibale at the same time

    return 0;
}