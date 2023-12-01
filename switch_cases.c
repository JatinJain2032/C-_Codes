# include <stdio.h>
int main()
{
    int num;
    printf("Enter your marks:");
    scanf("%d",&num);

    switch(num/10)
    {
        case 10:
        case 9: 
        
            printf("YOu have got A grade");
        
        break;

        case 8: 
        
            printf("YOu have got B grade");
        break;

        case 7: 
        
            printf("YOu have got C grade");
        break;

        case 6: 
        
            printf("YOu have got D grade");
        break;

        case 5: 
        
            printf("YOu have got E grade");
        break;

        case 4: 
        
            printf("YOu have got F grade");
        break;

        default :
        printf("You have failed");
        
    }
    return 0;
}