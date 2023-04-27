#include <stdio.h>
#include <math.h>
int digitSum(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
void f(int x,int sum){
    int lower=pow(10,x-1);
    int upper=pow(10,x)-1;
    for(int i=lower;i<=upper;i++){
        if(digitSum(i)==sum) printf("%i\n",i);
    }
    
}
int main(){
    int n,s;
    scanf("%i%i",&n,&s);
    f(n,s);
}
