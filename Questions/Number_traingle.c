# include <stdio.h>
int main()
{
    int range,i,j;
    printf("Enter the range upto which you want a number triangle:");
    scanf("%d",&range);

    for(i=1;i<=range;i++)
    {
       for(j=range;j>=i;j--) // or for(j=1;j=range-i;j++)
       printf(" ");

       for(int k=1;k<=i;k++)
       {
           printf("%d",k);
       }

       for(int m=i-1;m>=1;m--)
       {
           printf("%d",m);
       }
       printf("\n");
    }
    return 0;
}