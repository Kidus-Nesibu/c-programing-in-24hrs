/*2. Declare and define a function, called MultiTwo(), that can perform multiplication
on two integer variables. Call the MultiTwo() function from the main() function
and pass two integers to MultiTwo(). Then print out the result returned by the
MultiTwo() function on the screen.*/
#include<stdio.h>
int MultiTwo(int a, int b);
int main ()
{
    int a; 
    int b;
    a = 10;
    b = 5;
    printf("%d\n", MultiTwo(a, b));
    return 0;
}
int MultiTwo(int a, int b)
{
    return a*b;
}

