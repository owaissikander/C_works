#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "secure123"; // The correct password
    char input[20]; // To store user input
    int attempts = 3; // Number of allowed login attempts

    while (attempts > 0) {
        printf("Enter the password: ");
        scanf("%s", input);

        if (strcmp(input, password) == 0) {
            printf("Access granted. Welcome!\n");
            break; // Correct password, exit the loop
        } else {
            attempts--;
            printf("Incorrect password. %d attempts remaining.\n", attempts);
        }
    }

    if (attempts == 0) {
        printf("Access denied. Too many incorrect attempts.\n");
    }

    return 0;
}