#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the no upto which you want table\n");
    scanf("%d",&n);

    for( i=1;i<=n;i++)
    {
        for( j=1;j<=10;j++)
        {
            int table=i*j;
           printf("%d\t",table);  
           
        }
        printf("\n");
    }

    
   return 0;
}