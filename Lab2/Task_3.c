#include <stdio.h>
#include <stdlib.h>
int SecondDigit(long int x){
    if(x<0){
        x=0-x;
    }
    while(x>100){
        x/=10;
    }
    return x%10;
}
int main(){
    long int n;
    scanf("%ld",&n);
    printf("%i",SecondDigit(n));

}