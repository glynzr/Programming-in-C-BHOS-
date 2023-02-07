#include <stdio.h>
int main(){
    int m,n,result;
    scanf("%i %i",&m,&n);
    result=n/m;
    if(n%m!=0){
        result++;
    }
    printf("%i",result);
}