/*Q4. Write a program to calculate the grade of a student. There are five
subjects. Marks in each subject are entered from keyboard. Assign grade
based on the following rule*/

#include <stdio.h>
int main() 

{

    int s1, s2, s3, s4, s5;
    int total;
    float average;

    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;
    average = total / 5.0;

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", average);

    if (average >= 90)
        printf("Grade = A");
    else if (average >= 75)
        printf("Grade = B");
    else if (average >= 60)
        printf("Grade = C");
    else if (average >= 50)
        printf("Grade = D");
    else
        printf("Grade = F");

    return 0;
}