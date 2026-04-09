#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,max;
    printf("Enter 2 Nos: ");
    scanf("%d %d",&a, &b);
    max=(a+b+abs(a-b))/2;
    printf("Max: %d",max);
    return 0;
}