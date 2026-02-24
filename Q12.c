//Q12. Write a Program to reverse the letters present in the given String. Do not use strrev() function.

#include <stdio.h>
#include <string.h>
int main() 

{
    char str[100];
    int i, length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    printf("Reversed string: ");

    for(i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}