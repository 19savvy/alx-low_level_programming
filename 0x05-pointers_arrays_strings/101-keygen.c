#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // Define the characters that can be used in the password
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    // Define the length of the password
    int password_length = 10;

    // Seed the random number generator
    srand(time(NULL));

    // Generate the password
    char password[password_length + 1];
    for (int i = 0; i < password_length; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    password[password_length] = '\0';

    // Output the password
    printf("Random password: %s\n", password);

    return 0;
}
