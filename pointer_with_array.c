# include <stdio.h>
int main()
{
    int a=6;
    int *ptra=&a;

    printf("%d\n",ptra);
    ptra--; // this means subtract 1 that is 4 byte
    printf("%d\n",ptra);
    ptra++;  // this means add 1 that is 4 byte
    printf("%d\n",ptra);
    printf("%d\n",ptra-2);
    printf("%d\n",ptra+2);


    int arr[]={1,2,3,4,5,6,7,8};
    int *arrayptr= arr;
    printf("the value at position 3 is %d\n", arr[3]);
    printf("the address of first element of array is %d \n",arr);
     printf("the address of first element of array is %d \n",&arr);
    printf("the address of seconf element of array is %d \n",&arr[1]);
     printf("the address of seconf element of array is %d \n",arr+1);
     printf("the address of third element of array is %d \n",&arr[2]);
     printf("the address of third element of array is %d \n",&arr+2);
    
    printf("The value at first position in array is %d\n",arr[0]);
    printf("The value at first position in array is %d\n",(*&arr[0]));
    printf("The value at second position in array is %d\n",arr[1]);
    printf("The value at second position in array is %d\n",(*&arr[1]));
    printf("The value at first position in array is %d\n", *(arr+1));

    
     
     

    return 0;

}