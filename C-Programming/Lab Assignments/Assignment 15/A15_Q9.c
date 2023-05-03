#include<stdio.h>
int NumDig();
int main()
{
    int n,d;
    printf("Enter a Number : ");
    scanf("%d", &n);
    printf("Enter the Digit : ");
    scanf("%d", &d);
    if(NumDig(n,d)==1)
    {
        printf("The Digit is present in the Number.");
    }
    else if(NumDig(n,d)==0)
    {
        printf("The Digit is not present in the Number.");
    }
    
    return 0;
}
int NumDig(int n, int d)
{
    if(n%10==d){return 1;}
    else if(n/10%10==d){return 1;}
    else if(n/100%10==d){return 1;}
    else if(n/1000%10==d){return 1;}
    else if(n/10000%10==d){return 1;}
    else if(n/100000%10==d){return 1;}
    else if(n/1000000%10==d){return 1;}
    else if(n/10000000%10==d){return 1;}
    else if(n/100000000%10==d){return 1;}
    else if(n/1000000000%10==d){return 1;}
    else{return 0;}
}