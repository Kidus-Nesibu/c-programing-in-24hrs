/*4. Rewrite the add_two() function in Listing 14.3 to print out the previous result of
the addition, as well as the counter value.*/
#include<stdio.h>
static int counter = 1;
int add_two(int i, int j)
{
    return i + j;
}
int main ()
{
    int i, j;
    for(i=0,j=5;i<5; i++, j--)
    {
        printf("The addition of %d + %d = %d\n", i, j, add_two(i, j));
        printf("This is the function call of %d\n", counter++);
    }
    return 0;
}