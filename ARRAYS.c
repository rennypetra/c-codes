#include<stdio.h>
int main ()
{
    /*declare array*/
    int students [5]={10,20,30,40,50};
    /*display array contents*/
    for (int i=0;i<5;i++)
    {
        printf("%d:\t",students[i]);
    }
    return 0;
}
