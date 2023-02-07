#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,x;
    scanf("%i %i",&n,&x);
    int count=0;
    while(n>0){
        if(n%10==x){
            count+=1;
        }
        n/=10;
    }
    if(count==2){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}