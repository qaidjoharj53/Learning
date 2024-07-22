#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("How many numbers do you want to print? : ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter %d number : ",i+1);
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("\nSum of all the elements entered is : %d\n",sum);

    return 0;
}