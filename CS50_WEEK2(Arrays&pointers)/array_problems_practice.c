#include <stdio.h>

int main(void)
{

// ARRAY TRASVERSAL

//     int arr[3]={10,20,30};
//     for(int i=0; i<3; i++)
//      {printf("%d\n", arr[i]);}




//  ARRAY TRASVERSAL USING POINTERS

//     int *p = arr;
//     for(int i = 0; i < 3; i++) 
//     {printf("%d\n", *(p + i));}


    

// ARRAY MANIPULATION (sum)

// int arr[]={10,20,30,40};
// int sum=0;
// for (int i=0; i<4;i++)
// {sum=sum+arr[i];}
     
// printf("sum is  %f\n", (float)sum/4);



    
// FIND MAX
  
//  int arr[]={100,20,-1,40,200};

//  int max=arr[0];
//  for (int i=0; i<5; i++)
//  { if(arr[i]>max)
// {max=arr[i];} }
   
// printf("max%d: ", max);


    


// REVERSE ARRAY

//     int arr[]={23,600,20,-1,40,9,200};
//      int temp=0;
//     int n=7;
//    for (int i=0; i<n/2; i++)
//    {
//     temp=arr[i];
//     arr[i]=arr[n-i-1];
//     arr[n-i-1] = temp;
//    }

//    for(int i=0; i<7; i++)
//     {printf("%d\n", arr[i]);}





// INSERTION

// int arr[10]={23,600,20,-1,40,9,200};
// int n= 7;
// int index=4;
// for(int i=n; i>index; i--)
// {
//     arr[i]=arr[i-1];
// }
// arr[index]=78;
// n++;
// printf("%d",arr[7]);






// DELETION

// int arr[]={23,600,20,-1,40,9,200};
//  int n=6;
//  int index=4;
// for (int i=index;i<n; i++)
// {
//     arr[i]=arr[i+1];
// }
// n--;

// for(int i=0; i<6; i++)
//  { printf("%d\n", arr[i]);}





// COUNTING EVEN NUMBERS

// int arr[]={23,600,20,5,3,40,9,78,1};
// int even=0;
// int odd=0;

// for (int i=0;i<9;i++)
// {
//     if (arr[i]%2==0)
//     { even=even+1;}

//     else
//     {odd=odd+1;}
// }
// printf("%d\n", even);
// printf("%d", odd);





// COUNT HOW MANY TIMES  A NUMBER APPEARS

// int arr[]={600,20,5,3,40,78,9,9,9};
// int freq=0;
// for (int i=0; i<9; i++)
// {
//     if(arr[i]==9)
//     {freq=freq+1;}
// }
// printf("%d", freq);








// COPY ONE ARRAY TO OTHER

// int arr1[]={600,20,5,3,40,78,9,9,9};
// int n = sizeof(arr1) / sizeof(arr1[0]);

// int arr2[n];

// for(int i=0; i<n;i++){
//     arr2[i]=arr1[i];
// }
// for(int i=0; i<9; i++)
//  {printf("%d", arr2[i]);}






// SHIFTING ALL ELEMENTS ONE POSITION RIGHT

// int arr1[10]={600,20,5,3,40,78,9,9,9};
// int n=8;
// for(int i=n;i>0;i--)
// {
//     // arr1[i]=arr1[i-1];
//     arr1[i+1]=arr1[i];
// }
//     arr1[0] = 100; 
//     n++;

//     for(int i = 0; i < 10; i++) {
//         printf("%d ", arr1[i]);
//     }







// SHIFTING ALL ELEMENTS ONE POSITION LEFT

// int arr1[10]={600,20,5,3,40,78,9,9,9};
// int n=9;
// for(int i=0;i<n; i++)
// {
//     arr1[i]=arr1[i+1];
// }
// n--;

// for(int i = 0; i < 8; i++) {
//         printf("%d ", arr1[i]);
//     }





// DELETE ELEMENT FROM LAST

// int arr1[9]={600,20,5,3,40,78,9,9,9};
// int n=8;
// n--;

// for(int i = 0; i < n; i++) {
//         printf("%d ", arr1[i]);
//     }





// Print array using pointers


// int arr1[]={600,20,5,3,40,78,9,9,9};
// int *p=arr1;
// for (int i =0; i<9; i++)
// {printf("%d\n", p);
// }





// CHECK IF ARRAY IS SORTED OR NOT

// int arr1[]={2,3,4,5,6,7,2};
// int issorted=1;
// for(int i=0; i<6; i++)
// {
//     if(arr1[i]>arr1[i+1])
//     {
//         issorted=0;
//         break;
//     }}


//     if(issorted==0){

//         printf("not sorted");
//     }
//     else{
//         printf("sorted");
//     }





// Second largest

// int arr1[]={20,5,3,40,78,9,9,9,600};

//  int max=arr1[0];
//  int max2=-2147483648;;
 
// for (int i=0; i<9; i++)
//  { if(arr1[i]>max){
    
//     max=arr1[i];
    
//    } 
// }

// printf("%d\n",max);
// for(int i=0; i<9; i++) {
//         if(arr1[i] != max && arr1[i] > max2) {
//             max2 = arr1[i];
//         }
//     }

// printf("%d\n",max2);



// FIND DUPLICATES

// int arr1[]={600,20,5,3,40,78,9,9};
// for(int i = 0; i < 9; i++) {
//         for(int j = i+1; j < 9; j++) {
//             if(arr1[i] == arr1[j]) {
//                 printf("%d ", arr1[i]);
//                 break;
//             }
//         }
//     }





// FIND MISSING NUMBER
//  int arr[] = {1,2,4,5};
//     int n = 5;

//     int expectedSum = n * (n + 1) / 2;

//     int actualSum = 0;

//     for(int i = 0; i < n-1; i++) {
//         actualSum += arr[i];
//     }

//     printf("Missing number = %d", expectedSum - actualSum);


// char arr[3]={'a','b','c'};
// for(int i=0;i<3;i++)
// {
//     printf("%c",arr[i]);
// }



int arr1[5]={1,2,3,4,5};
    int *p=arr1;
   printf("%zu\n",sizeof(p));
   printf("%zu",(*arr1));






return 0;   
}