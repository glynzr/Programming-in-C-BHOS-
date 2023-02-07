#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,x;
    int flag=0;
    scanf("%i %i",&n,&x);
    while(n>0){
        if(n%10==x){
            flag=1;
            break;
        }
        n/=10;
    }
    if(flag){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

}