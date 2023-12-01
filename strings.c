# include <stdio.h>

void printStr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    //char str[]="jatin jain and I live in mumbai";
    //printf("My name is %s",str);

    // char str[] = {'j', 'a', 't', 'i', 'n', '\0'};
    // char str[6] = "jatin";
     char str[25];
     gets(str);
     printf("Using custom function printstr\n");
     printStr(str);
     printf("using printf %s \n",str);
     printf("using puts:\n");
     puts(str);
     

     char string[6]="jatin";  // here we can put the range like we have put 6 or it we don't put the rang then also it will run
     printf("print above thing %s", string);

    return 0;
}