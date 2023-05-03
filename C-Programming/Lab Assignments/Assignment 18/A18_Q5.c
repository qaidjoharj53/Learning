#include<stdio.h>
int main()
{
    int a=0, smallest, num[10];
    for(int i=0; i<10; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &num[i]);
    }

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(num[i]<num[j])
            {
                a++;
            }
        }
        if(a==9)
        {
            smallest = num[i];
            break;
        }
        else
        {
            a=0;
        }
    }

    printf("Smallest number is : %d", smallest);

    return 0;
}