#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%i",&n);
    int sum=0;
    for(int i=0;i<n;i++){
        int x;
        scanf("%i",&x);
        if(x>0){
            sum+=x;
        }
    }
    printf("%i\n",sum);
}