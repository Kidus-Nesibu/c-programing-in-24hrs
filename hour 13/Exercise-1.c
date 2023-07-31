#include<stdio.h>
#include<string.h>
int main ()
{
    //1. Given a character array in the following statement,
    //char str1[] = “This is Exercise 1.”;
    char str1[20] = "This is exercise 1.";
    char str2[20];
    strcpy(str2, str1);
    printf("%s\n", str2);

}