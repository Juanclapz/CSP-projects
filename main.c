#include <stdio.h>
char siblings[8][20] = {"James", "Eddie", "Kirk", "Slash", "Jonathan", "Joey", "Freddie", "Kurt"};
int i;
int main (){
    for(i=0; i < 8; i++){
        printf("%s\n", siblings[i]);
    }
    return 0;
}