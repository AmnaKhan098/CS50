#include<stdio.h>

int main(void)
{
   int number=0;
   int ans=0;
   int great=0;
   do{
    
    printf("enter your number:\n");
   scanf("%i",&number);
   }while(number<0);
   
   if (number==0)
   {
     printf("%d", number);
   }
    else{
   while(number>0)
    {

        ans=number%10;
        number=number/10;
        if (ans>great){
            great=ans;
        } 

        
    }
    printf("%d", great);

}
    

}