#include<stdio.h>
int main(){

    int dividend, quotient, divisior, remainder;
    printf("Enter dividend:\n");
    scanf("%d",&dividend);
    printf("Enter divisior:\n");
    scanf("%d",&divisior);

    quotient = dividend / divisior;
    remainder = dividend % divisior;
    printf("The Remainder:%d\n", remainder);
    printf("The Quotient:%d\n", quotient);

    return 0;

}