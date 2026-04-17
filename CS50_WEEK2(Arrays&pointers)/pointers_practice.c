#include <stdio.h>

int main() {
    int arr[3] = {10,20,30};
    int *p = arr;

    printf("%d\n", *p);
    printf("%d\n", *(p+1));
    printf("%d\n", *(p+2));

   
    // int arr[4] = {1, 2, 3, 4};
    //   int *p = arr;
//     // printf("%d\n", arr[2]);
//     // printf("%d\n", *(arr + 2));


//     printf("%d\n", *p++);
//     printf("%d\n", *p);
    
}


