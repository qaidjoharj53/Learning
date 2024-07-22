#include<stdio.h>
/* Convert Fahrenheit temperature to Celcius equivalent*/

int main()
{
    int fahr, celcius;
    printf("Enter temperature in Fahr\n");
    scanf("%d",&fahr);
    celcius = 5/9*(fahr-32);
    
//Uncomment the following and test your output (comment the previous celcius calculation) 
    //celcius = 5*(fahr-32)/9;
    //celcius = 5.0/9 * (fahr-32);
    
    printf("Temperature in Celcius is = %d\n", celcius);
    return 0;
}