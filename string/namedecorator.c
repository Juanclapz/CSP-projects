#include<stdio.h>
#include <string.h>


int main(void){
    char name [20];
    char sentence [400];
    printf("What's your name?\n");
    scanf("%s", name);
strcat(sentence, "~~~");
    strcat(sentence, name);
    strcat(sentence, "~~~");
    printf("%s\n", sentence);
    return 0;
}