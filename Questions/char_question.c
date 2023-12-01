# include <stdio.h>
// IN this program we will find the the given character is vowel or consonent

int main()
{
    char ch;
    printf("Enter a alphabetical character and I will tell you it is vowel or consonent ");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z'))
    {
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
       {
            printf("Entered character is Vowel");
       }
        else
        {
            printf("Entered character is consonent");
        }
        
    }
    else
    {
        printf("Neither vowel nor consonent");
    }


    return 0;
}