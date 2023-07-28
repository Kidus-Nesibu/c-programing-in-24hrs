#include<stdio.h>
int main()
{
    // Rewrite the program in Exercise 1, but this time use a for loop to initialize the
    //character array with ‘a’, ‘b’, ‘c’, ‘d’, and ‘e’, and then print out the value of
    //each element in the array.
    char array_ch[5];
    int i;
    char c;
    for(i=0;i<5;i++)
    {
        array_ch[i];
    }
    for(c=0;c<5;c++)
    {
        array_ch[c] = 'A'+c;
        printf("array_ch[%d] = '%c'\n", array_ch[i], array_ch[c]);
    }
    return 0;
}