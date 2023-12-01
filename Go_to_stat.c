// These are also called ‘Jump Statement’.
//It is used to transfer the control to a predefined label.
//It’s use is avoided since it causes confusion for the fellow programmers in understanding code.
//goto statement is preferable when we need to break multiple loops using a single statement at the same time

#include <stdio.h>

int main()
{
    // label:
    //     printf("we are inside label");
    //     goto end;
    // printf("Hello World\n");
    // goto label;
    // end:
    //     printf("we are at end");
    int num;
    for(int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for(int j = 0; j < 8; j++)
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d", &num);
            if(num==0){
                goto end;
            }
        }
        
    }
    end:
    

    return 0;
}

