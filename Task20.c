// Calculate delayed and arrival time of the train (leetcode)
#include<stdio.h>
int main()
{
    int Arrival_time,Delayed_time;
    int Delayed_Arrival_time;
    printf("Enter the Arrival time : ");
    scanf("%d",&Arrival_time);
    printf("Enter the Delayed Time:");
    scanf("%d",&Delayed_time);
   Delayed_Arrival_time=(Arrival_time+Delayed_time)%24;
    printf("%d",&Delayed_Arrival_time);
    return 0;

}