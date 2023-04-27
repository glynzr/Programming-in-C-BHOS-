#include <stdio.h>
#include <math.h>
double f(double x){
    return 3*sin(x);
}
int main(){
    double a,b,h;
    scanf("%lf%lf%lf",&a,&b,&h);
    for(double i=a;i<=b;i+=h){
        printf("%.3lf\t%.3lf\n",i,f(i));
    }
}
