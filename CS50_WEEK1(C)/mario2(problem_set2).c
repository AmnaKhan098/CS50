#include <stdio.h>

int main(void)

{
      int height;
      do{
      printf("what will be the height?:");
      scanf("%d", &height);

      }while(height<0 || height>8);

      
      for(int i=1; i<=height;i++)
    {

      for(int k=1; k<=height-i; k++)
      {
        printf(" ");
      }

      for (int j = 1; j<= i; j++)
      {
        printf("#");
        
        
      }
      printf("   ");
      for(int m=1; m<=i; m++)
      {
        printf("#");
      }
      printf("\n");
    
    
    }

}
