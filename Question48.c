#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements range from (1 to 100)");
    scanf("%d", &n);

    for(int i = 0; i < n; ++i){
        printf("Enter number:", i + 1);
        scanf("%lf", &arr[i]);

    }
    for(int i = 1; i < n; ++i){
        if (arr[0] < arr[i]){
            arr[0] = arr[i];
        }
    }
printf("Enter the largest element:%.2f", arr[0]);

return 0;


}