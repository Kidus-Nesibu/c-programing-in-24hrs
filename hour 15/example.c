#include<stdio.h>
#include<stdarg.h>
int sum(int num_args, ...);
int main ()
{
    printf("sum of 3,2,1,4 is: %d", sum(3,2,1,4));
    return 0;
}
int sum (int num_args, ...)
{
    int i;
    int val = 0 ;
    va_list args;
    va_start(args, num_args);
    for(i=0;i<num_args;i++)
    {
        val += va_arg(args, int );
    }
    va_end(args);
    return val;


}