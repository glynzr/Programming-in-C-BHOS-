#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int sum=0;
    while(1){
        scanf("%i",&n);
        if(n<0){
            break;
        }
        sum+=n;
    }
    printf("%i\n",sum);
}