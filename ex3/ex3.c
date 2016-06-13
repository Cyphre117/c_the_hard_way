#include <stdio.h>

int main( int argc, char* argv[] )
{
    // What happens when age is left unset?
    // warning: variable 'age' is uninitialised
    int age = 10;
    int height = 72;

    // what happens when we remove age from the printf?
    // warning: more '%' conversions than data arguments
    // warning: unused variable 'age'
    printf( "I am %d years old.\n", age );
    printf( "I am %d inches tall.\n\n", height );

    printf( "d is for decimal int: %d\n", 248 );
    printf( "o is for octal (base eight): %o\n", 248 );
    printf( "x and X are for hex: %x and %X\n", 248, 248 );
    printf( "u is for unsigned int: %u\n", -1 );
    printf( "c is for char: %c\n", 'a' );
    printf( "ld is long int and lu is for long unsigned int\n" );
    printf( "s is for: '%s'\n", "string" );
    printf( "Then there are f, g, e, lf, lg, and le\n\n" );

    printf( "Modifiers change the way decimal places are displayed\n" );
    printf( "%%6.3f, 2.8: %6.4f\n", 2.8 );
    printf( "%%08, 24: %08d\n", 24 );


    return 0;
}
