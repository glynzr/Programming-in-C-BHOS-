#include <stdio.h>
int main(){
    int n;
    scanf("%i",&n);
    double sum=0;
    for(int i=1;i<n+1;i++){
        sum+=(double) 1/(i*(i+1));
        
    }
    printf("%.3lf",sum);
    
}