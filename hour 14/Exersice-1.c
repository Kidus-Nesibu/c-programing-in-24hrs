#include<stdio.h>
int main ()
{
    /*Exercises
    1. Given the following:
    • An int variable with block scope and temporary storage
    • A constant character variable with block scope
    • A float local variable with permanent storage
    • A register int variable
    • A char pointer initialized with a null character*/
    {
        auto int temporary_int;
    }
    {
        const int  constant_int;
    }
    static float permanent_storage;
    register int reg_var;
    char* pointer = '\0';

}