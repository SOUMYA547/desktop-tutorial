#include<stdio.h>
int main(){
    int n, i;
    float num[100], sum = 0.0, avg;



    printf("Enter the number of elements:");
    scanf("%d", &n);

    while(n > 100 || n < 1){
        printf("Error! the number should be in range of 1 to 100.\n");
        printf("Enter the number again:");
        scanf("%d", &n);
    }

    for(i = 0; i < n; ++i){
        printf("%d. Enter Number:", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }
    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0;
}