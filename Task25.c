#include<stdio.h>
int main()
{
    int a,b;
    a=b=1;
    while(a<=5)
    {
        printf("%d",b);
        b=!b;
        a=a+1;
    }
}