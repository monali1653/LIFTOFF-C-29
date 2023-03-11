#include<stdio.h>
int main(){
    float r,d,c,a;
    printf("Enter radius of circle:\n");
    scanf("%f", &r);
    printf("Diameter of the circle:%f\n", 2*r);
    printf("Circumference of the circle:%f\n", 2*3.14*r);
    printf("Area of thr circle:%f\n", 3.14*r*r);
    return 0;
}