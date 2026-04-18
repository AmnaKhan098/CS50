#include <stdio.h>

int main(void){


int arr[10]={23,2,6,4,0,7,1,9,3,5};
int n=10;
for(int i=0; i<n;i++){
    int min =i;
    for (int j=i+1; j<n;j++){
       if (arr[min]>arr[j]){
        min=j;
       }}

    int temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;

}

for(int i=0; i<10;i++){

    printf("%d\n", arr[i]);
}













return 0;   
}