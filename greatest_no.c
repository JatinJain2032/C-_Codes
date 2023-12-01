# include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter four different numbers and I will tell you which one is largest:");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    
    if(a>b && a>c && a>d)
    {
       printf("largest no is %d", a);
    }

    if(b>c && b>a && b>d)
    {
        printf("largest no is %d", b);
    }

    if(c>b && c>a && c>d)
    {
        printf("largest no is %d", c);
    }

    if(d>b && d>c && d>a)
    {
        printf("largest no is %d", d);
    }
    return 0;
}