#include <stdio.h>
int main(void){
    double a,b,c;
    printf("a=");scanf("%lf",&a);
    printf("b=");scanf("%lf",&b);
    printf("c=");scanf("%lf",&c);
    double x = (c-b)/a;
    printf("x=%3.3f\n",x);
    return 0;

}