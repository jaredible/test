// C program to find the size of file

#include <stdio.h>
#include <errno.h>

long int file_sz(char file_name[])
{
    // Open the file in read mode

    FILE * fd;
    if ( ! ( fd = fopen ( file_name, "r" ) ) )
    {
	perror ( "Error: " );
	return ( -1 );
    }

    // Go to the end of file

    fseek ( fd, 0L, SEEK_END );

    // Determine the location of file end with respect to its beginning

    long int sz = ftell ( fd );

    // Close the file

    fclose ( fd );

    return ( sz );
}

int main( int argc, char ** argv )
{
    if ( argc < 2 )
    {
	fprintf ( stderr, "usage: %s filename\n", argv[0] );
    }

    char * file_name = argv[1];
    long int ret = file_sz ( file_name );
    if ( ret != -1 )
    {
	printf ( "Size of file %s is %ld bytes\n", file_name, ret );
	return ( 0 );
    }
}
