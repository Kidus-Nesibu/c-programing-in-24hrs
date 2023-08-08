/*4. Rewrite the program in Listing 15.3 again. This time, print out all arguments
passed to the AddDouble() function. Does va_arg() fetch each argument in the
same order (that is, from left to right) of the argument list passed to AddDouble()?*/
#include<stdio.h>
#include<stdarg.h>
double AddDouble(double num_args, ...);
int  main ()
{
    AddDouble(4, 5.5, 6.0, 7.67, 8.98);
    return 0;
}
double AddDouble(double num_args, ...)
{
    int i;
    double val;
    va_list args;
    va_start(args, num_args);
    for (i=0; i<num_args; i++)
    {
        val = va_arg(args, double );
        printf("%f\n", val);
    }
    va_end(args);
}

