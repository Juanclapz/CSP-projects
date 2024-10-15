#include <stdio.h>

void hello(char name[]){
    printf("hello %s\n", name);
}

int main(void){
    hello("Ryker");
    hello("Isaac");
    hello("Bob");
    hello("Juan");
    hello("Jonathan");
    return 0;
}
