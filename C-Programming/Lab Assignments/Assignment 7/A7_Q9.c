#include<stdio.h>
int main()
{
    int cp,sp,P,L,PerP,PerL;
    printf("Enter Cost Price of the Product : ");
    scanf("%d", &cp);
    printf("Enter Selling Price of the Product : ");
    scanf("%d", &sp);
    P = sp-cp;
    L = cp-sp;
    PerP = 100*P/cp;
    PerL = 100*L/cp;
        if(cp<sp)
        {
            printf("Profit Percentage : %d %%", PerP);
        }
        else if(cp>sp)
        {
            printf("Loss Percentage : %d %%", PerL);
        }
        else
        {
            printf("Neither Profit Nor Loss.");
        }
    return 0; 
}