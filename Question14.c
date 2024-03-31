#include<stdio.h>
int main(){
    int a;
    printf("Enter the number:\n");
    scanf("%d", &a);

    if (a >= 0){
        printf("It is positive\n");

    }
    else if (a <= 0){
        printf("It is negative\n");

    }
    else 
    printf("Its okay");
    
}