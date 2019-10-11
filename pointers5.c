#include <stdio.h>
/*function declaration*/
int sum (int a,int b);
int sum_indirect(int *c,int*d);
int sum (int a,int b)
{
    return (a+b);
}
int sum_indirect(int *c,int*d)
{
    return(*c+*d);
}
int main ()
{
    int first,second,direct,indirect;
    first=70;
    second=30;
    printf("\n the first value:",first);
    scanf("%d",&first);
    printf("\n the second value is:",second);
    scanf("%d",&second);
    /*function calls*/
    direct=sum (first,second);
    indirect=sum_indirect (&first,&second);
    printf("direct summation :%d\n\n indirect summation :%d",direct,indirect);
    return 0;
}


