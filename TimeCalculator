#include <stdio.h>
struct Time{
    int hour;
    int minute;
    int second;
};
int main(){
    struct Time t1;
    struct Time t2;
    scanf("%i:%i:%i",&t1.hour,&t1.minute,&t1.second);
    scanf("%i:%i:%i",&t2.hour,&t2.minute,&t2.second);
    struct Time t3;
    long long int t1Second=t1.hour*3600+t1.minute*60+t1.second;
    long long int t2Second=t2.hour*3600+t2.minute*60+t2.second;
    long long int t3Second;
    if(t1.hour<t2.hour) t3Second=t2Second-t1Second;
    else t3Second=86400-t1Second+t2Second;

    t3.hour=t3Second/3600;
    t3.minute= t3Second%3600/60;
    t3.second=t3Second%3600%60;
    printf("%.2i:%.2i:%.2i",t3.hour,t3.minute,t3.second);
}
