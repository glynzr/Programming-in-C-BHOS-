#include <stdio.h>
#include <stdlib.h>
int SmoothDivisor(int x){
    int result=0;
    for(int i=1;i<x;i++){
        if(x%i==x/i){
            result++;
        }
    }
    return result;
}
int main(){
    int n;
    scanf("%i",&n);
    printf("%i",SmoothDivisor(n));
}