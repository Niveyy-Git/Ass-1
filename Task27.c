// Multiplication table
#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the Num :");
    scanf("%d",&num);
    printf("Enter the value of i :");
    scanf("%d",&i);
    while(i<=10)
    {
        printf("%d*%d=%d\n",num,i,num*i);
        i=i+1;
    }
    
}