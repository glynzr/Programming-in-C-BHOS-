#include <stdio.h>
#include <math.h>
double triangleAngle(double x1,double y1,double x2,double y2,double x3,double y3 ){
    double a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    double b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    double c=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));


    double cosA=(b*b+c*c-a*a)/(2*b*c);
    double angleA=acos(cosA)*180/M_PI;

    double cosB=(a*a+c*c-b*b)/(2*a*c);
    double angleB=acos(cosB)*180/M_PI;

    double cosC=(b*b+a*a-c*c)/(2*b*a);
    double angleC=acos(cosC)*180/M_PI;

    double maxAngle=angleA;
    if(maxAngle<angleB) maxAngle=angleB;
    if(maxAngle<angleC) maxAngle=angleC;

    return maxAngle;
}
int main(){
    double  x1,y1,x2,y2,x3,y3;
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    printf("%.6lf",triangleAngle(x1,y1,x2,y2,x3,y3));

}