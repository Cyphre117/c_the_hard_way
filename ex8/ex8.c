#include <stdio.h>

int main(int argc, char *argv[])
{
    // The C99 standard only requires 16 bit signed ints from -32767 to +32767
    // Most common modern systems implement a 32bit int
    int areas[] = {10, 12, 13, 14, 20};
    areas[1] = 120;
    char name[] = "Thomas";
    name[0] = 'Z';
    name[1] = 'e';
    name[2] = 'd';
    char full_name[] = {
        'T', 'h', 'o', 'm', 'a', 's', ' ',
        'J', ' ',
        'H', 'o', 'p', 'e', '\0'
    };

    // Warning: on some systems you may have to change the
    // %ld in this code to %u since it will use unsigned ints
    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));
    printf("The number of ints in areas %ld\n", sizeof(areas) / sizeof(int));
    printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]);
    printf("\n");
    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %ld\n", sizeof(name));
    printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));
    printf("\n");
    printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
    printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));
    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

    return 0;
}
