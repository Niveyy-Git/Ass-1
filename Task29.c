// Program to find sum of digits in given no
#include<stdio.h>
void main()
{
    int num,sod;
    sod=0;
    printf("Enter the Nos :");
    scanf("%d",&num);
    while(num>0)
    {
        sod=(num%10)+sod;
        scanf("%d",&sod);
        num=num/10;
    }
    printf("%d",sod);
}