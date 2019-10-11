#include<stdio.h>
int main()
{  float principle,rate,time,interest;

    printf("enter principle:\n");
    scanf("%f",&principle);
    printf("enter rate per year:\n");
    scanf("%f",&rate);
    printf("enter time:\n");
    scanf("%f",&time);
    interest=(principle*rate*time)/100;
    printf("interest=%f",interest);
    return 0;
}
