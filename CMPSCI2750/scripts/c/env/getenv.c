#include <stdio.h>
#include <stdlib.h>

int main()
{
    char * env_var;
    const char * var = "PATH";
    
    if ( ! ( env_var = getenv ( var ) ) )
    {
	fprintf ( stderr, "Environment variable %s not found\n", var );
	return ( 1 );
    }

    printf ( "%s\n", env_var );

    return ( 0 );
}
