#include<stdio.h>

int main(void){

int arr[10]={23,2,6,4,0,7,1,9,3,5};
int n=10;
for(int j=0; j<n-1;j++){
for(int i=0; i<n-i-1;i++){

   if(arr[i]>arr[i+1]){
     int temp=0;
     temp=arr[i];
     arr[i]=arr[i+1];
     arr[i+1]=temp;

   }

}
}
for(int i=0; i<10;i++){

    printf("%d\n", arr[i]);
}












  return 0;  
}