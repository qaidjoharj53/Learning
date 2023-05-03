#include<stdio.h>
extern int common;

void SecondDisplay()
{
    common = 30;
    printf("In Second : %d\n", common);
}