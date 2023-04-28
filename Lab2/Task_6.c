#include <stdio.h>
typedef long long int lli;
int main(){ 
    lli n;
    scanf("%lli",&n);
    printf("%lli",n>0 ? (1+n)*n/2 : (1+n)*(2-n)/2);
}
