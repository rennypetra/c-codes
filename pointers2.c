#include<stdio.h>
int main ()
{
    int a,b;
    a=50;
    b=65;
    int *c=&a;
    int *d=&b;

    printf("The address of a is %p",&a);
    printf("\n\nThe address of b is %p",&b);
    printf("\n\nthe address of c is %p",&c);
    printf("\n\nthe address of d is %p",&d);
    printf("\n\nthe value stored by pointer c is %p",c);
    printf("\n\nthe value stored by pointer d is %p",d);
    printf("\n\nthe value pointed to by pointer c is %d",*c);
    printf("\n\nthe value pointed to by pointer d is %d",*d);

    return 0;
}
