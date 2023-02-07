#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%i",&n);
    int sum=0;
    if(n>0){
        sum=(1+n)*n/2;
    }else{
        sum=(1+n)*(2-n)/2;
    }
    printf("%i",sum);
}