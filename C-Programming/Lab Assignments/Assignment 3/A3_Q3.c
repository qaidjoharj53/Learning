#include <stdio.h>
int main()
{
    int a,b,c;   //Declaration of a variable.
    printf("Enter the value of the first variable : ");     //taking a value for the variable from user.
    scanf("%d",&a);                               //Putting the user input value in 1st variable.
    printf("Enter the value of the second variable : ");     //taking a value for the variable from user.
    scanf("%d",&b);                               //Putting the user input value in 2nd variable.
    printf("Enter the value of the third variable : ");     //taking a value for the variable from user.
    scanf("%d",&c);                               //Putting the user input value in 3rd variable.
    printf("Value of the first variable is......%d\n",a);     //Printing the user input value of 1st variable.
    printf("Value of the second variable is......%d\n",b);     //Printing the user input value of 2nd variable.
    printf("Value of the third variable is......%d\n",c);     //Printing the user input value of 3rd variable.
    return 0;
}