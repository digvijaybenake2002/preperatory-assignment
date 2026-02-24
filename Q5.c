/*Q5. Write a program to check the input characters for uppercase,
lowercase, number of digits and other characters. Display appropriate
message.*/


#include<stdio.h>
int main()

{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase letter");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase letter");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    else {
        printf("Special character");
    }

    return 0;
}