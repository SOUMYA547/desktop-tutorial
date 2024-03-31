#include<stdio.h>
int main(){
    int n,i, sum = 0;
    printf("Enter a Positive Integer:\n");
    scanf("%d", &n);

    for (i = 1;i <= n; i++);{
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;


}