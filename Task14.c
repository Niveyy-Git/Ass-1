#include<stdio.h>
    int main()
    {
        int num;
        printf("Enter the num:");
        scanf("%d",&num);
        if(num%2==0)
        {
            printf("The num is even");
        }
        else{
            printf("The num is odd");
        }
        return 0;
    }