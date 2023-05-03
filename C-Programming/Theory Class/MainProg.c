#include<stdio.h>
void FirstDisplay();
void SecondDisplay();
int common;
int main()
{
    common = 10;
    printf("In main file : %d\n", common);
    FirstDisplay();
    SecondDisplay();
}