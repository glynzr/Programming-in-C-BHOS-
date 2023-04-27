#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void split(char word[1000]){
   char result[1000];
   for(int i=0,j=0;word[i]!='\0';i++){
    if(word[i]>='0' && word[i]<='9' || word[i]=='.' ){
        result[j]=word[i];
        j++;
    }
   }
   strcpy(word,result);
}
int main(){
    char moneyspent[1000],percentage[1000];
    printf("How much was the meal?");
    fgets(moneyspent,1000,stdin);

    moneyspent[strcspn(moneyspent,"\n")]='\0';

    printf("What percentage would you like to tip?");
    fgets(percentage,1000,stdin);

    percentage[strcspn(percentage,"\n")]='\0';
   
   split(moneyspent);
   split(percentage);
   printf("Leave:%.2lf",atof(moneyspent)*atof(percentage)/100.00);

}
