#include<stdio.h>
int main(){
    double first, second, temp;
    printf("Enter first number:\n", first);
    scanf("%lf", &first);
    printf("Enter second number:\n", second);
    scanf("%lf", &second);
    temp = first;
    first = second;
    second = temp;
    printf("\nAfter swapping first number = %.0lf\n" , first);
    printf("After swapping second number = %.0lf\n" , second);



    return 0;

}