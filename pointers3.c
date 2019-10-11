#include<stdio.h>
int main ()
{
    int a,b;
    a=50;
    b=5;
    int c=&a;
    int*p=&b;
    printf("%p",c);
    return 0;
}
