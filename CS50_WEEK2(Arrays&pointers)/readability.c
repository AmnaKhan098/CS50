#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<math.h>
int count_letters(char input_1[]);
int count_words(char input_1[]);
int count_sentence(char input_1[]);
int main(void){
char input[10000];
printf("Text:");
fgets(input, sizeof(input), stdin);

int letters=count_letters(input);
int words=count_words(input);
printf("%d", words);
int sentence=count_sentence(input);

// calcuating average number of letters per 100 words

float L=((float)letters/words)*100;
float S=((float)sentence / words)*100;

// Compute the Coleman-Liau index

float index = 0.0588 * L - 0.296 * S - 15.8;

int grade=round(index);

if(grade>=16){
  printf("Grade 16+");
}
else if (grade<1){
    printf("Before Grade 1");
}
else{
    printf("Grade %d ",grade);
}








return 0;   
}

int count_letters(char input_1[]){
    int letter=0;
    for(int i=0; input_1[i] != '\0';i++){
        if(isalpha(input_1[i])){
            letter++;
        }

    }
    return letter;


}

int count_words(char input_1[]){

    int word=1;
    for(int i=0; input_1[i] != '\0';i++){
        if(input_1[i] == ' '){
            word++;
        }

    }
    return word;

}

int count_sentence(char input_1[]){

    int sentence=0;
    for(int i=0; input_1[i] != '\0';i++){
        if(input_1[i]=='.'||input_1[i]=='?'||input_1[i]=='!'){
            sentence++;
        }

    }
    return sentence;


}
