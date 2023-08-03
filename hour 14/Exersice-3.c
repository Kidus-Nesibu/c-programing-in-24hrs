/*3. Compile and run the following program. What do you get on the screen, and why?
#include <stdio.h>
int main()
{
int i;
for (i=0; i<5; i++){
int x = 0;
static int y = 0;
printf(“x=%d, y=%d\n”, x++, y++);
}
return 0;
}*/
#include<stdio.h>
int main()
{
    int i;

    for (i=0;i<5;i++)
    {
        int x = 0;//this is due to the auto storager specifier
        static int y=0;
        printf("x=%d, y=%d\n", x++, y++);
    }
    return 0;
}