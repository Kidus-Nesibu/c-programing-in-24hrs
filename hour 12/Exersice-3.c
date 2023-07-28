#include<stdio.h>
int main()
{
    //Given this two-dimensional unsized array:
    //char list_ch[][2] = {
    //‘1’, ‘a’,
    //‘2’, ‘b’,
    //‘3’, ‘c’,
    //‘4’, ‘d’,
    //‘5’, ‘e’,
    //‘6’, ‘f’};
    //write a program to measure the total bytes taken by the array, and then print out all
    //elements of the array.
    char list_ch[][2] = {
        '1', 'a',
        '2', 'b',
        '3', 'c',
        '4', 'd',
        '5', 'e',
        '6', 'f',
    };
    int num_element;
    num_element = sizeof(list_ch)/sizeof(list_ch[0]);
    printf("number of elements = %d\n", num_element);
    printf("%dbytes", sizeof(list_ch));
    int i;
    int j;
    for(i=0;i<num_element;i++)
    {
        printf("\n");
        for(j=0;j<2; j++)
            printf("%d,%c", list_ch[i][j]);
    }
    
    return 0;

}