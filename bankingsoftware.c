//  ©Made by Shresth Verma
//EMI Calulator for Simple and compound interest
#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,d,e,f,g;
    printf("enter p");
    scanf("%f",&a);
    printf("enter r");
    scanf("%f",&b);
    printf("enter t");
    scanf("%f",&c);
    d=(1+b/100);
    e=pow(d,c);
    f=e*a;
    g=a*b*c/100;
    printf("compound Interest is %f",f-a);
    printf("\n simple interest is %f",a*b*c/100);
    printf("\n EMI paid for compound interest is %f",f/(c*12));
    printf("\n EMI paid for simple interest is %f",(g+a)/(c*12));
    return 0;
    
}