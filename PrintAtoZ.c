#include <stdio.h>

int main() {
    char letter = 'A';

    printf("Alphabet\tNumeric Values : \n");
    scanf("%c",  'A');
   

    while (letter <= 'Z') {
        int numericValue = letter - 'A' + 1;
        printf("%c\t\t%d\n", letter, numericValue);
        letter++;
    }

    return 0;
}
