#include<stdio.h>
int main()
{
    // Given the following array:
    //double list_data[6] = {
    //1.12345,
    //2.12345,
    //3.12345,
    //4.12345,
    //5.12345};
    //use the two equivalent ways taught in this lesson to measure the total memory
    //space taken by the array, and then display the results on the screen.
    double list_data[6] = {
        1.12345,
        2.12345,
        3.12345,
        4.12345,
        5.12345,
    };
    printf("%dbytes\n", sizeof(list_data));
    printf("%dbytes\n", sizeof(double)*6);
    return 0;
}