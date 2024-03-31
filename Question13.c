#include<stdio.h>
int main(){
    int year;
    printf("Enter the Year:\n");
    scanf("%d", &year);

    if(year % 400 == 0){
    printf("It is a Leap Year", &year);
}
    else if(year % 100 == 0) {
    printf("It is a Leap Year", &year);
    }
    
    else if (year % 4 == 0){
        printf("It is a Leap Year", &year);

    }

    else {
        printf("It is not a Leap Year", &year);
    }


    return 0;

}