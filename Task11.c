#include<stdio.h>
int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("The Number is positive");
    }
    else 
    {
        printf("The Number is negative");
    }
    return 0;
}