#include<math.h>
#include<stdio.h>

int main(){
    int r, c, a[10][10], transpose[10][10],i,j;
    printf("Enter the rows and columns:");
    scanf("%d %d", &r, &c);

    printf("\nEnter Matrix Elements\n");
    for(int i = 0; i < r; ++i)
    for(int j = 0; j < c; ++j){
        printf("Enter Element a%d%d:", i + 1, j + 1);
        scanf("%d", &a[i][j]);
    }

     printf("\nEntered Matrix\n");
    for(int i = 0; i < r; ++i)
    for(int j = 0; j < c; ++j){
        printf("%d:", a[i][j]);
        if(j == c - 1)
        printf("\n");

    }

    for(int i = 0; i < r; ++i)
    for(int j = 0; j < c; ++j){
    transpose[j][i] = a[i][j];

}

printf("\nTranspose of the Matrix\n");
for(i = 0; i < r; ++i)
for(j = 0; j < c; ++j){
    printf("%d  ", transpose[i][j]);
    if(j == r - 1);
    printf("\n");
}

    return 0;
}