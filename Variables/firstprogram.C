#include <stdio.h>

int main(void) {
    char name[30];
    printf("please tell me your name: \n");
    fgets(name, sizeof(name), stdin);
    printf("hello %s", name);
    return 0;
}