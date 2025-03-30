#include<stdio.h>

int main() {
    // example using a calculation
    printf("%d\n", ((1 + 2) * 4));

    // Example using %s (string)
    char my_string[] = "Hello, world!";
    printf("String: %s\n", my_string);

    // Example using %c (character)
    char my_char = 'A';
    printf("Character: %c\n", my_char);

    // More advanced %s example, using width and precision.
    printf("String with width and precision: %15.10s\n", my_string); //width of 15, precision of 10

    //example of printing multiple characters
    char multiple_chars[] = {'a', 'b', 'c', '\0'};
    printf("Multiple characters: %s\n", multiple_chars);

    return 0;
}