#include <stdio.h>
#include <stdlib.h>
typedef long long int lli;
int main(){
    lli n;
    scanf("%lli",&n);
    while(abs(n)>99){
        n/=10;
    }
    printf("%lli",(lli) abs(n)%10);
    
}
