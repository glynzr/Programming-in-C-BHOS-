#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
typedef char* string;
string converter(string text){
    string result= (string) malloc(1000* sizeof(string));
    for(int i=0,j=0;text[i]!='\0';i++){
        if(text[i]>='A' && text[i]<='Z') {
            result[j]='_';
            j++;
           
        } 
        result[j]=tolower(text[i]);
            j++;
    }
    strcpy(text,result);
    free(result);
    return text;
}
int main(){
    string camelcase;
    camelcase= (string) malloc(1000*sizeof(string));
    printf("Camel case:");
    fgets(camelcase,1000,stdin);

    camelcase[strcspn(camelcase,"\n")]='\0';
    printf("Ouptut:%s",converter(camelcase));
    free(camelcase);

}
