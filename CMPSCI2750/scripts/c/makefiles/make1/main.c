#include <stdio.h>
#define extern
#include "mymath.h"
#undef extern

int main ()
{
    int s, c;
    int i, num;
    printf ( "Please enter a number: " );
    scanf ( "%d", &num );

    for ( i = 0; i < num; i++ )
    {
	x = i;
	s = square ();
	c = cube ();

	printf ( "Number = %4d Square = %6d  Cube = %8d\n", x, s, c );
    }

    return ( 0 );
}
