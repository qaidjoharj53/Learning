#include<stdio.h>
int main()
{
    int y, w, day;
    printf("Enter the no. of days : ");
    scanf("%d", &day);
    y = day/365;
    if(y>0)
    {
        day = day/(365*y);
    }
    w = day/7;
    if(w>0)
    {
        day = day/(7*w);
    }
    printf("%d Year, %d Weeks, %d Days", y,w,day);

    return 0;
}