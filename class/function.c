#include<stdio.h>
int function(int a, int b, int c)
{
    int res;

    res = a * b + c;

    return res;
}

void main(void)
{
 printf("結果は%dです", function(10,20,30));
}