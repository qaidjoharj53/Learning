#include<stdio.h>
extern int common;

void FirstDisplay()
{
    common = 20;
    printf("In First : %d\n", common);
}