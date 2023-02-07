#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%i",&n);
    for(int i=1;i<n;i++){
        printf("%i",i);
    }

    for(int i=n;i>0;i--){
        printf("%i",i);
    }
}