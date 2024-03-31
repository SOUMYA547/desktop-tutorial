#include<stdio.h>
int main(){
    char c;
    printf("Enter The Letter:\n");
    scanf("%c", &c);

   if ((c >= 'a' && c <= 'b') || (c >= 'A' && c <= 'Z'))
   printf("It is a Letter\n", c);
   else
   printf("It is not a Letter\n", c);

   return 0;
}