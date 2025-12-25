#include <stdio.h>

int main()
{
    int number, firstDigit, lastDigit, sum;

    printf("Enter any number: ");
    scanf("%d", &number);

    lastDigit = number % 10;

    firstDigit = number;
    while (firstDigit >= 10)
    {
        firstDigit = firstDigit / 10;
    }

    sum = firstDigit + lastDigit;

    printf("The first digit is: %d\n", firstDigit);
    printf("The last digit is: %d\n", lastDigit);
    printf("The e sum of the first and last digits: %d\n", sum);
}