#include<stdio.h>
int main()
{
    char ch[] = "Hello there!";
    int i;
    int length =0;
    for (i=0;ch[i];i++)
    {
        length++;
    }
    printf("%d", length);
}