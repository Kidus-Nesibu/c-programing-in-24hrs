/*2. Rewrite the program in Listing 14.2. This time, pass the int variable x and the
float variable y as arguments to the function_1() function. What do you get on
your screen after running the program?*/
#include<stdio.h>
int x =1234;
double y =1.234567;
void function_1(int x, float y)
{
    printf("From function 1:\n x=%d, y=%f\n", x, y);

}
int main ()
{
    int x = 4321;
    function_1(x, y);
    printf("With in the main block\n=%d, y=%f\n", x, y);
    {
        double y =7.654321;
        function_1(x, y);
        printf("With in the nested block:\n=%d, y=%f", x, y);
    }
}
