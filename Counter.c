#include <stdio.h>

int main()
{
    long long i;
    int count = 0;

    printf("Enter any number: ");
    if (scanf("%lld", &i) != 1);

    if (i == 0) {
        count = 1;
    } else {

        if (i < 0) {
            i = -i;
        }
        
        while (i != 0) {
            i /= 10;
            ++count;
        }

        printf("Total number of digits: %d\n", count);
    }
}