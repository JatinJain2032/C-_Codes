#include <stdio.h>

int func1(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is  %d \n", i, arr[i]);
    }
    arr[0] = 33; // Very important point that if you change any value here, it gets reflected in main()
    return 0;
}

int func2(int *ptr)
{
    for (int j = 0; j < 4; j++)
    {
        printf("The value at %d is %d\n", j, *(ptr + j));
    }
    *(ptr + 2) = 65;
    return 0;
}

int func3(int arr1[2][2])
{
    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l < 2; l++)
        {
            printf("The value at %d, %d is %d\n", k, l, arr1[k][l]);
        }
    }
}

int main()
{
    int array[] = {12, 14, 16, 18};
    int anotherarray[2][2] = {{44, 55}, {66, 77}};

    func1(array);
    printf("The value at index 0 is %d\n", array[0]);
    func2(array);
    printf("The value at index 0 is %d\n", array[2]);
    func3(anotherarray);

    return 0;
}