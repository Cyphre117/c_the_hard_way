#include <stdio.h>

int main(int argc, char *argv[])
{
    // This notation sets the first element, and initializes the rest to '0'
    int numbers[4] = {0};
    char name[4] = {'a'};

    // First, print them out raw
    printf("Numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("Name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

    // Setup the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    // Setup the name
    name[0] = 'T';
    name[1] = 'o';
    name[2] = 'm';
    name[3] = '\0';
    
    // Print them out initialized
    printf("Numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("Name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    
    // Print the name like a string
    printf("Name: %s\n", name);

    // Another way to use name
    char *another = "Tom";

    printf("another: %s\n", another);

    printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

    return 0;
}
