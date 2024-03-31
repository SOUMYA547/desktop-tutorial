#include<stdio.h>
int main(){
    long long n;
    int count = 0;
    printf("Enter an Integer =\n");
    scanf("%lld", &n);

    do {
        n /= 10;
        ++count;
       } while(n != 0);

       printf("The total no of digits is: %d\n", count);

    
}