#include <stdio.h>


int binarySearch(int arr[], int low, int high, int number);
int main(void)
{

// int arr[10]={2,3,4,5,6,7,9,11,23,34};
// int n=10;
// int number=6;
// int low=0;
// int high=n-1;
// int mid=0;
// while(low<=high){
//     mid=(low+high)/2;
//     if (arr[mid]==number){
//         printf("number is found at index %d",mid);
//         break;
//     }
//     else if(number>arr[mid]){

//         low=mid+1;

//     }
//     else {

//     high=mid-1;
//     }
    
 

// }


// Binary search through recursion

int arr[10]={2,3,4,5,6,7,9,11,23,34};
int n=10;
int number=11;
int low=0;
int high=n-1;
int result = binarySearch(arr, low, high, number);
if(result!=-1){
printf("value found%d",result);}
else{
    printf("not found");
}



return 0;

}

int binarySearch(int arr[], int low, int high, int number) {
    if (low > high)
        return -1;

    int mid = (low+ high) / 2;

    if (arr[mid] == number)
        return mid;

    else if (number < arr[mid])
         binarySearch(arr, low, mid - 1, number);

    else
         binarySearch(arr, mid + 1, high, number);
}