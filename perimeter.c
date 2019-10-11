#include<stdio.h>
int main ()
{
    int length,width,perimeter;
    printf("enter length:\n");
    scanf("%d",&length);
    printf("enter width:\n");
    scanf("%d",&width);
    perimeter=2*length+2*width;
    printf("perimeter=%d",perimeter);
    return 0;
}
