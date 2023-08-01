#include<stdio.h>
int main()
{
    //4. Write a program that uses the scanf() function to read in two integers entered by
    //the user, adds the two integers, and then prints out the sum on the screen.
    int num1, num2;
    int sum;
    printf("Enter 2 numbers\n");
    scanf("%d%d", &num1, &num2);
    sum =num1+num2;
    printf("sum is equal to:%d\n", sum);
    return 0;
}