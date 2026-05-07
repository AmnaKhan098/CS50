#include <stdio.h>
#include <ctype.h>
int compute_score(char input_1[], int points[]);
int main(void){


int points[]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};


char input_1[10];
printf("Player 1: ");
scanf("%s", input_1);
char input_2[10];
printf("Player 2: ");
scanf("%s", input_2);



//calculating score for player 1
int score1=compute_score(input_1, points);
int score2=compute_score(input_2, points);

//making decision

if (score1>score2){
    printf("Player 1 wins!");
}
else if (score1<score2){
    printf("Player 2 wins!");
}
else{
    printf("Tie!");
}





return 0;

}


int compute_score(char input_1[], int points[]){
int sum=0;
for(int i=0;  input_1[i] != '\0'; i++){
    if (isupper(input_1[i])){

        int val= input_1[i]-'A';
        sum=sum +points[val];
    }
    else if(islower(input_1[i])){

        int val= input_1[i]-'a';
        sum=sum +points[val];
    }

}
return sum;

}