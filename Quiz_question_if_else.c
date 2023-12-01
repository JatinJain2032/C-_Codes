#include <stdio.h>

int main()
{
   int math='2';
    int sci='1';
     
     

    printf("You will get gifts based on your performance in  Math and Science subject\n");
    
    printf("write 2 if you have passed in math else write 3\n");
    scanf("%d",&math);
    printf("write 1 if you have passed in science else write 43\n");
    scanf("%d",&sci);
    
    if(math==2 && sci==1 )
    {
        printf("congratulations you are getting 45 Rupees for passing in math and science\n");
    }
    else if(sci==1)
    {
      printf("congratulations you are getting 15 Rupees for passing in sci\n");
    }
    
    else if(math==2)
    {
      printf("congratulations you are getting 15 Rupees for passing in math\n");
    }
    
    return 0;
}