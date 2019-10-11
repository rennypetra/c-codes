#include<stdio.h>
int main ()
{
    int a,b;
    a=50;
    b=65;
    int *c=&a;
    int *d=&b;
    int sum_direct=a+b;
    int sum_indirect=*c+*d;
    printf("direct summation:%d \n\n indirect summation :%d",sum_direct,sum_indirect);
    return 0;
}
