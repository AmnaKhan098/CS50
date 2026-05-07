#include<stdio.h>
void break_array(int left,int right,int arr[]);
void merge(int arr[], int left, int mid, int right) ;

int main(void){


int arr[10]={23,2,6,4,0,7,1,9};
int left=0;
int right=7;
break_array(left,right,arr);

for (int i = 0; i <= right; i++) {
        printf("%d ", arr[i]);
    }




return 0;
}


void break_array(int left,int right,int arr[]){

if (left>=right){
   return;
}
else{
int mid=(left+right)/2;
break_array(left,mid,arr);
break_array(mid+1,right,arr);
merge(arr, left, mid, right);
}

}

// Function to merge two halves
void merge(int arr[], int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = 0;

    int temp[100];  // temporary array (fixed size for simplicity)

    // Compare and merge
    while (i <= mid && j <= right) {
        if (arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    // Copy remaining elements (left half)
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy remaining elements (right half)
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Copy back to original array
    for (int i = left, k = 0; i <= right; i++, k++) {
        arr[i] = temp[k];
    }
}
