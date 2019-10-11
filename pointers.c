#include<stdio.h>
int sum (int a,int b);
int difference (int c, int d);
int sum(int a,int b)
{
    int add;
    add=a+b;
    return add;
}
int difference(int c, int d)
{
    int minus;
    minus=c-d;
    return minus;
}
int main ()
{
    int first,second,summation,subtraction;
    first=10;
    second=20;
    summation=sum(first,second);
    subtraction=difference(first,second);
    printf("sum :%d\t difference :%d",summation,subtraction);
   return 0;
}
