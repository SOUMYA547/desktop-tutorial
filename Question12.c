#include<math.h>
#include<stdio.h>
int main(){
    double a,b,c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter Coefficients a, b and c:\n ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0){
    root1 = (-b + sqrt(discriminant)) / (2*a);
    root1 = (-b - sqrt(discriminant)) / (2*a);
    printf("root1 = %f\n", "root2 = %f\n", root1 ,root2);
    }
    else if (discriminant == 0){
    root1 = root2 = -b / (2*a);
    printf("root1 = %f\n", "root2 = %f\n", root1 ,root2);
    }
    else {
    realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;

    }
    