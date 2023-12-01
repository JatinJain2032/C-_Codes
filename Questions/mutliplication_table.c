#include <stdio.h>

int main()
{
    int i,j;
    printf(" Enter the number of which you want table 8\n");
    scanf("%d",&j);
    printf("here is the table of %d \n", j);
    for(i=1;i<=10;i++)
    {
      printf("%d \n",i*j);
    }

    return 0;
    
}