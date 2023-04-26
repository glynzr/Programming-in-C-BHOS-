#include <stdio.h>
#include "modular.h"
#include <stdlib.h>
#include <string.h>

int main(){
    string name=(string) malloc(1000*sizeof(char));
    printf("***Part 1***\n");
    printf("Enter you name plz:");
    fgets(name,1000,stdin);
    name[strcspn(name,"\n")]='\0';
    printf("Hello,%s,welcome to C modules\n\n",name);
    free(name);
    printf("***Part 2***\n");
    printf("The number you have entered is %i\n\n",get_negative_int());


    printf("***Part 3***\n");
    int len;
    printf("Enter array length:");
    scanf("%i",&len);
    int array[len];
    printf("Enter array elements:");
    for(int i=0;i<len;i++){
        scanf("%i",array+i);
    }

    printf("Average of array elements:%.3f",average(len,array));

}
