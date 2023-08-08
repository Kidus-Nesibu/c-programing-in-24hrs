/*3. Rewrite the program in Listing 15.3. This time, make a function that takes a variable number of int arguments and performs the operation of multiplication on
these arguments.*/
#include<stdio.h>
#include<stdarg.h>
int multi(int num_args, ...);
int main ()
{
    printf("multiplication of 1234 is:%d\n", multi(4,1,2,3,4));
    return 0;
}
int multi(int num_args, ...)
{
    int i; 
    int val= 1;
    va_list args;
    va_start(args, num_args);
    for (i=0; i<num_args; i++)
    {
        val *= va_arg(args, int);
        printf("%d\n", val);
    }
    va_end(args);
    return val;
}