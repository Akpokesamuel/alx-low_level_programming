#include <unistd.h>  // Include the necessary header file

/* Implementation of _putchar function */
int _putchar(char c) {
    return write(1, &c, 1);  // Write the character 'c' to the standard output
}

