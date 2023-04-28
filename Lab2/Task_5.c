#include <stdio.h>
#include <math.h>
double distance(int a1,int b1,int a2,int b2){
    return sqrt(pow((a1-a2),2)+pow((b1-b2),2));
}

double angle(double side1,double side2,double side3){
    return acos((side1*side1+side2*side2-side3*side3)/(2*side1*side2));
}

int main(){
    int x1,y1,x2,y2,x3,y3;
    scanf("%i%i%i%i%i%i",&x1,&y1,&x2,&y2,&x3,&y3);
    double a=distance(x1,y1,x2,y2);
    double b=distance(x2,y2,x3,y3);
    double c=distance(x1,y1,x3,y3);

    double angle1=angle(a,b,c);
    double angle2=angle(b,c,a);
    double angle3=angle(c,a,b);

    double max_=angle1;
    if(max_<angle2) max_=angle2;
    if(max_<angle3) max_=angle3;
    printf("%.6lf",max_*180/acos(-1));
}
