#include <stdio.h>
#include <stdlib.h>
int step(int n){
    int count=0;
    while(n!=1){
        if(n%2==0) n/=2;
        else n=3*n+1;
        count++;
    }
    return count+1;
}
int main(){
    int i,j;
    while(scanf("%i%i",&i,&j)==2){
        int max_=step(i);
        for(int k=i;k<=j;k++){
            if(max_<step(k)) max_=step(k);
        }
        printf("%i %i %i\n",i,j,max_);
    }
}
