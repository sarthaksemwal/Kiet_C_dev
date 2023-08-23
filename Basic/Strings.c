#include <stdio.h>

int main() {
    // Declare and initialize a string
    char greeting[] = "Hello, World!";
    
    // Print the string
    printf("Greeting: %s\n", greeting);
    
    // Calculate the length of the string
    int length = strlen(greeting);
    printf("Length: %d\n", length);
    
    return 0;
}
