#include <stdio.h>

/* Warning: This program is wrong on purpose. */
// Run it with valgrind to find out how wrong!
// 'valgrind ./ex4'

int main()
{
    int age = 10;
    int height;

    printf( "I am %d years old.\n" );
    printf( "I am %d inches tall.\n", height );

    return 0;
}
