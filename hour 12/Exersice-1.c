#include<stdio.h>
int main()
{
    //1. Given this character array:
    //char array_ch[5] = {‘A’, ‘B’, ‘C’, ‘D’, ‘E’};
    //write a program to display each element of the array on the screen.

    char array_ch[5] = {'A','B','C','D','E'};
    int i;
    for(i=0;i<5;i++)
        printf("%c\n", array_ch[i]);
    return 0;
}