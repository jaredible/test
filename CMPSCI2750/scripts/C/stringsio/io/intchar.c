#include <stdio.h>

int main()
{
    char fn[30], ln[30], location[30];
    int  hours;
    float hourly_rate, earned;

    printf ( "Please enter the first name and last name of the employee: " );
    scanf ( "%s%s", fn, ln );
    printf ( "Please enter the number of hours worked: ");
    scanf ( "%d",&hours );
    printf ( "Please enter the hourly rate: " );
    scanf ( "%f", &hourly_rate );
    printf ( "Please enter location: " );
    scanf ( "%s", location );

    earned = hours * hourly_rate;

    printf ( "%s %s earned $%010.2f in %s\n", fn, ln, earned, location );

    return ( 0 );
}
