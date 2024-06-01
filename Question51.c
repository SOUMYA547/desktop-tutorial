#include<math.h>
#include<stdio.h>

int main(){
    int r,c, a[100][100], b[100][100], multiply[100][100], i, j;
    printf("Enter the rows range from 1 to 100:\n");
    scanf("%d", &r);
    printf("Enter the column range from 1 to 100:\n");
    scanf("%d", &c);

    printf("Enter the elements of the first matrix:\n");
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j){
        printf("Enter the element of a%d%d:\n", i + 1, j + 1);
        scanf("%d", &a[i][j]);

    }

    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j){
        printf("Enter the element of b%d%d:\n", i + 1, j + 1);
        scanf("%d", &b[i][j]);

    }

    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j){
    
    multiply[i][j] = a[i][j] * b[i][j];
    }

    printf("\nMultiplication of two matrices:\n", &multiply[i][j]);
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j){
    printf("%d ", multiply[i][j]);
    if(j == c - 1){
        printf("\n\n");
    }
    }





    return 0;
}