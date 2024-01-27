#include <stdio.h>

int main() {
    char alphabet;

    printf("Enter an alphabet (A-Z): ");
    scanf(" %c", &alphabet);

     
    if (alphabet >= 'a' && alphabet <= 'z') {
        alphabet -= 'a' - 'A';
    }

    // Check if the input is a valid uppercase letter
    if (alphabet >= 'A' && alphabet <= 'Z') {
        int number = alphabet - 'A' + 1;
        printf("%c = %d\n", alphabet, number);
    } else {
        printf("Invalid input. Please enter a valid uppercase alphabet.\n");
    }

    return 0;
}
