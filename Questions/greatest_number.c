# include <stdio.h>

// we will find greates no. among three numbers
int main()
{
    int i,j,k;
    printf("Enter the three numbers:");
    scanf("%d %d %d",&i,&j,&k);

    if(i>j && i>k)
    {
        printf("%d is the greates among all the three numbers\n",i);
    }
    else if(j>i && j>k)
    {
        printf("%d is the greates among all the three numbers\n",j);
    }
     else 
     {
         printf("%d is the greates among all the three numbers\n",k); 
     }
    

    return 0;
}