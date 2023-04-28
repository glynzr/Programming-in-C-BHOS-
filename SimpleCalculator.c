#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char input[1000];
    fgets(input,1000,stdin);
    char num1[100];
    char num2[100];
    int index=0;
    for(int i=0,j=0;input[i]!='\0';i++){
        if(input[i]=='-' || input[i]=='+' 
        || input[i]=='/' || input[i]=='*') {
            index=i;
            break;
        }
        if(input[i]>='0' && input[i]<='9') {
            num1[j]=input[i];
            j++;
        }
    }

    for(int i=index+1,j=0;input[i]!='\0';i++){
        if(input[i]>='0' && input[i]<='9'){
            num2[j]=input[i];
            j++;
        }
    }
   

    switch(input[index]){
        case '-':
            printf("%i",atoi(num1)-atoi(num2));
            break;
        case '+':
            printf("%i",atoi(num1)+atoi(num2));
            break;
        case '*':
            printf("%i",atoi(num1)*atoi(num2));
            break;
        case '/':
            printf("%i",atoi(num1)/atoi(num2));
            break;
        default:
            break;
    }
}
