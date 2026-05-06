#include<stdio.h>
int fab(int n);
int main(void){
int num=9;
int sum=fab(num);
printf("%d",sum);







return 0;
}

int fab(int n){
int sum;
if (n==0){
    return 0;
}
else if (n==1){
    return 1;
}
else{

    sum =fab(n-1)+fab(n-2);
}

return sum;
}