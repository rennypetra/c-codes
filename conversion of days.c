#include<stdio.h>
int main()
{
    int weeks,months,years,days;
    printf("enter days:\n");
    scanf("%d",&days);
    weeks=days/7;
    months=days/30;
    years=days/365;
    printf("weeks=%d:\n",weeks);
    printf("months=%d:\n",months);
    printf("years=%d:\n",years);
    return 0;
}
