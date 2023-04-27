#include <stdio.h>
#include <math.h>
double f(double x){
    return sin(x)+sqrt(log(3*x)/log(4))+3*exp(x);
}
int main(){
    double x;
    while(scanf("%lf",&x)==1){
        printf("%.6lf\n",f(x));
    }
}
