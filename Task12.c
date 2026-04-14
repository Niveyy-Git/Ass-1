#include<stdio.h>
int main()
{
    int num;
    printf("Enter the num:");
    scanf("%d",&num);
    if(num>>31)
    {
        printf("The number is negative");
    }
    else
    {
        printf("The number is positive");
    }
}