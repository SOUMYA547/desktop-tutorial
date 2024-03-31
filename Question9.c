#include<stdio.h>
int main(){
    int num;
    printf("Enter an Integer:\n");
    scanf("%d", &num);

if (num %2 == 0)
    printf("The Number is Even\n");
else
    printf("The Number is Odd\n");

    return 0;

}