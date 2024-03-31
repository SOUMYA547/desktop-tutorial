#include<stdio.h>
int main(){
    double a,b,product;
    printf("Enter Two Numbers:\n ");
    scanf("%lf %lf",&a,&b);
    product = a*b;
    printf("Product of Two Numbers:%.0lf\n ",product);
    return 0;
}