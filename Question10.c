#include<stdio.h>
int main(){
    char c;
    int vowel;
    printf("Enter The Letter:");
    scanf("%c", &c);

    vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

if (vowel)
    printf("It is a Vowel", c);
    else 
    printf("It is not a Vowel", c);

    return 0;

}