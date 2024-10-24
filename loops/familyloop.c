#include <stdio.h>

char sibs[5][50] = {"Jonathan", "Kurt", "Joey", "Juan", "James"};
int i;
int main (){
    while(i<5){
        printf("hello %s!\n", sibs[i]);
        i++;
    }
    return 0;
}