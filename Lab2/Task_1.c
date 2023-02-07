#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,sum=0;
    scanf("%i",&n);
    int x=abs(n);
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    printf("%i\n",sum);
}