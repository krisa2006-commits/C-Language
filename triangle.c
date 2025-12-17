#include<stdio.h>

int main() {
    int first, second, third;

    printf("\nEnter first angle: ");
    scanf("%d", &first);

    printf("\nEnter second angle:");
    scanf("%d", &second);

    third=180-(first+second);
    printf("The Thied angle is %d", third);
}
