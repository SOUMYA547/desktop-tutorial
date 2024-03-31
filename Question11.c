#include<stdio.h>
int main(){
    double n1,n2,n3;
    printf("Enter three Numbers:\n");
    scanf("%lf %lf %lf", &n1,&n2,&n3 );

    if (n1 >= n2 && n1 >= n3)
    printf("n1 is greater\n", n1);

    if (n2 >= n1 && n2 >= n3)
    printf("n2 is greater\n", n2);

    if (n3 >= n1 && n3 >= n2)
    printf("n3 is greater\n", n3);


    return 0;


}