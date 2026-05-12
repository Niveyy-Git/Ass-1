#include<stdio.h>
    int main()
    {
        int a,b;
        printf("Enter the Nos: ");
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            printf("a is max");
            return a;
        }
        printf("b is max");
    }