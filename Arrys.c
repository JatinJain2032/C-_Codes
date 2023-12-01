#include <stdio.h>

int main()
{
    /*int marks[5] = {2, 4, 5, 6, 8};

    for (int i = 0; i < 4; i++)
    {
        printf("value of %d element is %d \n", i, marks[i]);
    }
    */

   /*int marks[6];

   for (int i = 0; i < 6; i++)
   {
       printf("enter the value of element %d \n",i);
       scanf("%d",marks[i]);
   }
   */

   int marks[2][5]={{2,4,6,8,10},{11,12,13,14,15}};
   
  for (int i = 0; i < 2; i++)
  {
      for (int j = 0; j<5; j++)
      {
          printf("%d ",marks[i][j]);
      }
      printf("\n");
  }
  
   
  
   

    return 0;
}