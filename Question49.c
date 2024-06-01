#include<math.h>
#include<stdio.h>

float calculationSD(float data[]);
int main(){
    int i;
    float data[10];
    printf("Enter the 10 numbers:");
    for(i = 0; i < 10; ++i)
        scanf("%f", &data[i]);
    printf("\nStandard Deviation = %.6f", calculationSD(data));
    return 0;

}

    float calculationSD(float data[]){
    float sum = 0.0 , mean, SD = 0.0;
    int i;
    for(i = 0; i < 10; ++i){
        sum += data[i];
    }
    mean = sum / 10;
    for(i = 0; i < 10; ++i){
        SD += pow(data[i] - mean, 2);
    }
    return sqrt(SD / 10);
    
}