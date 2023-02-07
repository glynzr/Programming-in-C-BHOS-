#include <stdio.h>
double factorial(int x){
    double result=1;
    for(int i=2;i<x+1;i++){
        result*=i;
    }
    return result;

}
int main(){
    int n;
    scanf("%i",&n);
    double e=1;
    for(int i=1;i<=n;i++){
        e+=1/factorial(i);
        
    }
    printf("%.3lf",e);
}