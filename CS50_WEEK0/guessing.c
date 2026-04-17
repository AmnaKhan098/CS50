#include <stdio.h>
#include <stdlib.h>

int main(void)

{

    #include <stdio.h>


    // %zu is the correct format specifier for size_t (the type returned by sizeof)
    printf("Size of long: %zu bytes\n", sizeof(int));
    return 0;


// printf("WELCOME TO GUESSING GAME\n");
// printf("Let's Start\n");
// int user_number=0;
// int low=1;
// int high=50;
// int computer=0;
// char answer1;
// int count=0;
// do{
//   printf("Pick a number from 1 to 50\n");
//   scanf("%d",&user_number);
// }while(user_number<0);

// while (computer!=user_number)

// {
//      computer=(rand() % (high - low + 1)) + low;
//      if (computer==user_number)
//      {
//         printf("%d\n", computer);
//         printf("\n");
//         printf("Yahoo! I Won\n");
//         printf("%d",count);
//      }
//     else
//      {
//       printf("%d\n", computer);
//       printf("Is my number low or high?\nType\'l\' for low and \'h\' for high:\n");
//       scanf(" %c", &answer1);
//       count++;
//       if (answer1=='l')
//       {
//         low=computer+1;
//       }
//       else if(answer1=='h')
//         {
//         high=computer-1;
//       }
//       else
//       {
//         printf("\n Invalid input");
//       }
//       if(low>high)
//       {
//         printf("\ninvalid ans\n");
//         break;
//       }
//      }
//     }     



}