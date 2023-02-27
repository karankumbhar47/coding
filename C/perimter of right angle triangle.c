#include <stdio.h>
#include <math.h>
int main(){
    float a ,b,c,d;
    printf("Enter the value of side a\n");
    scanf("%f",&a);
    printf("Enter the value of side b\n");
    scanf("%f",&b);
    d= a*a+b*b;
    c=sqrtf(d);
printf("the value of c is %f\n",c);
printf("perimter of triangle is %f\n",a+b+c);
    return 0;
}