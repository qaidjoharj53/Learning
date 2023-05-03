#include<stdio.h> 
int main() 
{ 
    int D,b,a,c;
    printf("Enter the value of a,b,c in a Quadratic Equation : "); 
    scanf("%d %d %d",&a,&b,&c); 
    D = (b*b)-4*(a*c); 
    switch(D)
    {
        case 0:
            printf("Real and Equal Roots.");
            break;
            
        default:
            if(D>0)
            {printf("Real and Distinct Roots.");}
            else if(D<0)
            {printf("Imaginary Roots.");}
            else{printf("Wrong Input!");}
    }
    return 0; 
}