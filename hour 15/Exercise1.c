#include<stdio.h>
#include<time.h>
int GetDateTime(void);
int main ()
{
    /*1. Rewrite the program in Listing 15.2. This time use the format specifier %c, instead
    of %s, to print out the character string of the local time on your computer.*/
    GetDateTime();
}
int GetDateTime(void)
{
    time_t now;
    printf("%ld\n", time(&now));
    printf("%c", asctime(localtime(&now)));
}