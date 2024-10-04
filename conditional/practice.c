#include <stdio.h>

int grade;

int main(){
    printf("what is your grade percent\n");
    snaf("%d", &grade);

    if (grade >= 90){
        printf("you have an A!\n");
    }
}