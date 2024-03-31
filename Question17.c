#include<stdio.h>
int main(){
    int n,i;
    unsigned long long fact = 1;
    printf("Enter an Integer:\n");
    scanf("%d",&n);


    if(n<0)
        printf("The integer never exists");
    else {
        for (i=1; i <= n; i++){
            fact *= i;

        }
        printf("Factorial of %d = %llu", n, fact);
        
    }

    return 0;


}