#include<stdio.h>
int main(){
    int n, reversed = 0,remainder, original;
    printf("Enter an Integer:\n");
    scanf("%d",&n);
    original = n;

    while( n != 0){
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if(original  == reversed){
        printf("%d is an original\n", original);
    }
    else{
        printf("%d is not an original\n", original);
    }
return 0;
}