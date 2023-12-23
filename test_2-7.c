#define PI 3.1415926
#include <stdio.h>
#include <math.h>
int main(){
    double r=3.67,c,s,v;
    c=2*PI*r;
    s=PI*pow(r,2);
    v=4.0/3.0*PI*r*r*r;
    printf("c=%f\ns=%f\nv=%f\n",c,s,v);
    return 0;
}