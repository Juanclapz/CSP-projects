#include <stdio.h>
#include <time.h>

int hour;


int main (){
    time_t now;
    struct tm*now_tm;

    now = time(NULL);
    now_tm = localtime(&now);
    hour = now_tm->tm_hour;
    print("%d\n", hour);

    if (hour <= 12){
        print("Good Morning!\n");
    }else if (hour <= 18){
        print("Good Afternoon!\n");
    }else if (hour <= 20){
        print("Good Evening!\n");
    }else{
        print("Good Night!\nGo to bed");
    }

    return 0;
}