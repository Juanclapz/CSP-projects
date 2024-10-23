#include <stdio.h>
#include <stdbool.h>
int age = 15;
bool vote = false;
int main(void){
    if(age >= 18 && vote != false){
        printf("you can vote!\n");
    }else if (age >= 16){
        printf("you are old enough to drive!\n");
    }else if (age >= 15){
        printf("you are old enough to get a learners permit\n");
    }else if (age >= 5){
        printf("you are old enough to go school!\n");
    }else if (age >= 1){
        printf("sorry, you are too young to go to school\n");
    };
    return 0;
}