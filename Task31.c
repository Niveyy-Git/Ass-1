// Find rev, sod, nod 
#include<stdio.h>
int main()
{
    int num,sod,nod,rev;
    printf("Enter the num : ");
    scanf("%d",&num);
    while(num!=0)
    {
        rev=rev*10+num%10;
        sod=sod+num%10;
        nod=nod+1;
        num=num/10;
    }
    printf("%d,%d,%d",rev,nod,sod);
}