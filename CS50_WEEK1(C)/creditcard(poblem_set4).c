#include <stdio.h>
#include <stdbool.h>

int main(void)

{ 
    //Check the validity of the card
    long long number =  4222222222222;
    long long number2=number;
    long long count2=number2;
    int digit=0;
    int inde=0;
    int temp=0;
    int sum=0;
    printf("Number %lld", number);
    printf("\n");
     
    while (number>0)
    {
        digit=number%10;
        inde=inde+1;
        number=number/10;
        
        if (inde%2!=0 ||inde==1)
        {   temp=digit*2;

            if(temp>9)
            {
                temp=temp-9;
            }
            sum= sum + temp ;

            
    
        } 
        else
        {
            sum= sum+digit;
        }
    }
    // printf("%d",sum);
    if(sum%10==0)
        {
           printf("Card is Valid");
           printf("\n");
        }   
    else
    {
        printf("NOT valid");
    }
    
    //check the type of the card
    int count=0;
    while(number2>0)
     {
       
        number2=number2/10;
        count++;

        
     }
     
     while(count2>100)
     {
        count2= count2/10;
        
     }
    
    if ((count2 == 34 || count2 == 37)&& count==15)
    {
     printf("AMEX\n");
    }
    else if ((count2 >= 51 && count2 <= 55 )&& count==16)
    {
        printf("MASTERCARD");


    }
    else if( count==16 ||count==13)
    {
        printf("VISA");
    }
    
    else
    {
        printf("INVALID");
    }
}