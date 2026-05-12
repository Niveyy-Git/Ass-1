// Calculate how many digits in the given no
#include<stdio.h>
int main()
{
    int num,count;
    count=0;
    printf("Enter the no:");
    scanf("%d",&num);
    while(num>0)
    {
        num=num/10;
        count=count+1;
    }
    printf("%d",count);
}