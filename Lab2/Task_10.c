#include <stdio.h>
#include <stdlib.h>
int isPrime(int x){
    for(int i=2;i<x;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%i",&n);
    if(isPrime(n)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

}