#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main(){
    char text[150];
    printf("Enter your text please:");
    fgets(text,150,stdin);
    for(int i=0;text[i]!='\0';i++){
        if(text[i]>='A' && text[i]<='Z') text[i]=tolower(text[i]);
    }
    text[strcspn(text,"\n")]='\0';


    printf("Output:%s\n",text);
}
