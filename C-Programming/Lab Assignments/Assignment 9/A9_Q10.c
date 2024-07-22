#include<stdio.h>
int main()
{
    int unit; float amount,surcharge,bill;
    printf("Enter Electricity Unit Charges Consumed : ");
    scanf("%d",&unit);
            if(unit<=50)
            { //50*0.50 = 25
                amount = 0.50*unit;
            }
            else if(unit<=150)
            { //100*0.75 = 75
                amount = 25+((unit-50)*0.75);
            }
            else if(unit<=250)
            { //100*1.20 = 120
                amount = 100+((unit-150)*1.20);  //25+75 = 100
            }
            else
            {
                amount = 220+((unit-250)*1.50);  //100+120 = 220
            }
        
        surcharge = amount*0.20;
        bill = amount+surcharge;
        printf("Total electricity bill = Rs. %.1f/-",bill);

    return 0;
}