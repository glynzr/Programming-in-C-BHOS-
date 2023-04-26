#include "modular.h"
#include <stdio.h>
float average(int length,int array[]){
    int sum=0;
    for(int i=0;i<length;i++){
        sum+=*(array+i);
    }
    return (float) (sum/length);
}


void print(string str){
    printf("\n%s\n",str);
}

int get_negative_int(void){
    int n;
    printf("Enter the negative integer:");
    while(1){
        scanf("%i",&n);
        if(n<0) break;
        printf("Enter the number again(previous one was not negative):");

    }
    return n;
}
