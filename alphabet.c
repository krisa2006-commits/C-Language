#include <stdio.h>

int main() 
{
    char letter = 'a';

    printf("Alphabets from a to z (skipping 3 between each): \n");

    do{
        printf("%c ", letter);

        letter = letter + 4;

    } while (letter <= 'z');
    
    printf("\n");
}