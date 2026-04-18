#include<stdio.h>

int main(void){


int arr[10]={23,2,6,4,0,7,1,9,3,5};
int n=10;

for(int i=1;i<n;i++){
    int key=arr[i];
    int j=i-1;

    while(j>=0&&arr[j]>key){
        
        arr[j+1]=arr[j];
        j=j-1;}


    arr[j+1]=key;



}

for(int i=0; i<10;i++){

    printf("%d\n", arr[i]);
}








 return 0;   
}