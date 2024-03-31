#include<math.h>
#include<stdio.h>
int main(){
    int low, high, rem = 0, originalNumber, number, count;
    double result = 0.0;
    printf("Enter Two Numbers(Interval):");
    scanf("%d %d",&low,&high);
    printf("Armstrong Numbers between %d and %d",low,high);

    if(high < low){
        high += low;
        low = high - low;
        high -= low;
    }
    for( number = low + 1; number < high; ++number){
    originalNumber = number;

    while(originalNumber != 0){
        originalNumber /= 10;
        ++count;

    }
    originalNumber = number;
    while(originalNumber != 0){
        rem = originalNumber % 10;
        result += pow(rem, count);

    }
    if ((int)result == number){
        printf("%d", number);

    }
    count = 0;
    result = 0;


    }
    return 0;

}