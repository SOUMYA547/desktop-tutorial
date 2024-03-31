#include <stdio.h>
int main(){
    int base, exp;
    long double result = 1.0;
    printf("Enter the base number:\n");
    scanf("%d", &base);
    printf("Enter the exponent number:\n");
    scanf("%d", &exp);

    while( exp != 0) {
        result*=base;
        --exp;
    }
    printf("Answer = %.0lf", result);
    return 0;
}