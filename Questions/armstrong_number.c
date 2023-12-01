

//we will claculate the armstrong number
//ex:153=(1*1*1)+(5*5*5)+(3*3*3)
# include <stdio.h>
int main()
{
    int n,r,sum=0,temp;
    printf("Enter the no.:");
    scanf("%d",&n);
    temp=n;

    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;     
    }

    if(temp==sum)
    {
        printf("Armstrong number");
    }
    else{
        printf("Not Armstrong");
    }
    return 0;
}
