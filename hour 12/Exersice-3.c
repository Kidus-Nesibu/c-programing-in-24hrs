#include<stdio.h>
int main()
{
    //Rewrite the program in Listing 12.5. This time put a string of characters, I like
    //C!, on the screen.
    int i;
    char array_ch[10] = {'I',' ','l','i','k','e',' ','C','!'};
    for(i=0;i<10;i++)
    {
        printf("%c", array_ch[i]);
    }
    printf("\n");
    return 0;
}