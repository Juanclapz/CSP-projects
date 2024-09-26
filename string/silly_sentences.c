#include <stdio.h>
#include <string.h>

int main(void){
    char name[20], place[20], verb[20], noun[20], sentence[500];
    printf("Type a name: ");
    scanf("%s", name);
    printf("Type a place: ");
    scanf("%s", place);
    printf("Type a past tense verb: ");
    scanf("%s", verb);
    printf("Type a noun: ");
    scanf("%s", noun);
    strcat(sentence, name);
    strcat(sentence, " went to the ");
    strcat(sentence,place);
    strcat(sentence," where they ");
    strcat(sentence,verb);
    strcat(sentence, " and bought a ");
    strcat(sentence, noun);
    strcat(sentence, ".\n");
    printf("%s", sentence);
    return 0;
}