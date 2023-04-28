#include <stdio.h>
typedef long long int lli;
int main(){
    lli n,m;
    scanf("%lli%lli",&n,&m);
    printf("%lli",(m%n)==0? m/n : m/n+1);

}
