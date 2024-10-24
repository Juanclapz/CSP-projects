#include <stdio.h>
#include <string.h>
#include <time.h>

int i, user;
char one[50], two[50], three[50];


void delay(int sec){
    int milli = 1000*sec;

    clock_t start = clock();

    while(clock()< start+milli);
}

int main(){
        printf("What number do you want it to go to? \n");
        scanf("%d", &user);
        printf("One word? \n");
        scanf("%s", one);
        printf("And another? \n");
        scanf("%s", two);
        strcat(three, one);
        strcat(three, two);

    //create a loop that counts to 50
    for(i=1;i<=user;i++){
      
    //replace #'s divisable by both with "FizzBuzz" 
    if (i%3==0 && i%5==0){
        printf("%s\n", three);


    //replace #'s divisable by 3 with "Fizz" 
    }else if (i%3==0){
              printf("%s\n", one);

    //replace #'s divisable by 5 with "Buzz"
    }else if (i%5==0){
              printf("%s\n", two);
    
    //Print all other numbers  
    }else{ 
    printf("%d\n", i);

    }  
    delay(125);
 }       
    return 0;
}