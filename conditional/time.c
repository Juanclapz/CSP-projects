#include <stdio.h>
#include <time.h>

time_t now;
struct tm*timeinfo;
int hour;
int main (){
    time_t rawtime;
    struct tm *now_tm;

    now = time(NULL);
    now_tm = localtime(&now);
    hour = now_tm->tm_hour;
    time(&rawtime);
    timeinfo = localtime (&rawtime);
    printf("current local time and date: %s", asctime(timeinfo));
    printf("tell me the hour in military time!:\n");
    scanf("%d", &hour);
    if (hour < 12){
        printf("good morning!\n");
    }else if (hour < 6){
        printf("good afternoon!\n");
    }else{
        printf("good evening!\n");
    }
    return 0;
}