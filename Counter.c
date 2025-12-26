#include <stdio.h>

int main()
{
    int i, count;

    printf("Enter any number: ");
    scanf("%d", &i);

    if (i == 0){
        count = 1;
    } else {
        
        while (i != 0) {
            i /= 10;
            ++count;
        }

        printf("Total number of digits: %d\n", count);
    }
}
