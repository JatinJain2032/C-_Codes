# include <stdio.h>

void reverse(int x, int y)
{
  int temp;
  temp=x;
  x=y;
  y=temp;
printf("Now THe value of x and y is %d & %d\n",x,y);  // here value will change but in main fun values will not change
}

void swap(int *c, int *d)
{
    int tmep1;
    tmep1=*c;
    *c=*d;
    *d=tmep1;

}


int main()
{
    int a=3, b=4 , r=5, s=6;

    printf("THe value of a and b is %d & %d\n",a,b);
    reverse(a,b); //pasing vlaue by call So here value of  actual varibale will not change.
    printf("Now THe value of a and b is %d & %d\n",a,b);

printf("\nTHe value of a and b is %d & %d\n",r,s);
    swap(&r,&s); // passing value by ref. and here actual value of variable changes

printf("Now THe value of a and b is %d & %d\n",r,s);
     
    return 0;
}