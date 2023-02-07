#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%i",&n);
    int myArray[n];
    for(int i=0;i<n;i++){
        int element;
        scanf("%i",&element);
        myArray[i]=element;
    }

    int min_=myArray[0];
    for(int i=0;i<n;i++){
        if(min_>myArray[i]){
            min_=myArray[i];
        }
    }
    printf("%i",min_);
}