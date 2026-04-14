#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Num: ");
    scanf("%d",&num);
    if(num&1)
{
    printf("The num is odd");
}
else
{
    printf("The num is even");
}
return 0;
}