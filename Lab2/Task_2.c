#include <stdio.h>
#include <stdlib.h>
long  int Product(long int  x){
     long int result=1;
    if(x<0){
        x=0-x;
    }
    while(x>0){
        if((x%10)%2==0){
            result*=x%10;
        }
        x/=10;
    }
    return result;
}
int main(){
    long int n;
    scanf("%ld",&n);
    if(Product(n)!=1){
        printf("%ld",Product(n));

    }else{
        printf("%i",-1);
    }


}