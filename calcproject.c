#include<stdio.h>

int main() {

    int mark;
    char grade;

    printf("Enter the mark: ");
    scanf("%d", &mark);

    grade = (mark >= 90) ? 'A':
            (mark >= 75) ? 'B':
            (mark >= 65) ? 'C':
            (mark >= 55) ? 'D':
            (mark >= 45) ? 'E':
            (mark >= 35) ? 'F':

    printf("Your grade is:%c",grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent Work!\n");
        break;
    
    case 'B':
        printf("Well Done\n");
        break;
        
    case 'C':
        printf("Good job\n");
        break;

    case 'D':
        printf("You passed\n");
        break;

    case 'E':
        printf("You passed, but need improvement\n");
        break;

    case 'F':
        printf("Sorry you are failed\n");
        break;

    default:
        printf("Invalid grade\n");
        break;
    }

    if(grade >='A' && grade >='F'){
        printf("Congratulations! You are eligible for the next level.\n");
    }

    else{
        printf("Please try again next time.\n");
    }
}