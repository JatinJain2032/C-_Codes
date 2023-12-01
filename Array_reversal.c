#include <stdio.h>

void arrayrev(int arr[])
{
    //we will swap the items
    int temp;
    for(int i=0;i<7/2;i++)
    {
        temp=arr[i];  //temp=a
        arr[i]=arr[6-i]; //a=b
        arr[6-i]=temp; //b=temp
    }
}

void arrprint(int array[]) // we can put same name or different name here
{
    for(int i=0;i<7;i++)
    printf("The value of element %d is %d\n", i, array[i]);
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    printf("Before reversing the array\n");
   arrprint(arr);
   arrayrev(arr);
   printf("\nafter reversing array\n");
   arrprint(arr);

   return 0;

}