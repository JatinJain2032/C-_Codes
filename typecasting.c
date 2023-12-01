//In typecasting we convert one data type into another datatype

#include <stdio.h>

int main()
{
    int  i=6;
    float b= (float)54/5; 
    char c;       //since both are int hence result will also be int hence we convert one of them to float

    printf("we will convert int to float which is %f",(float)i);
    printf("\n we are printing float %f",b);
    scanf(" %c",&c ); 
	printf("Character is %d",(int) c);
}