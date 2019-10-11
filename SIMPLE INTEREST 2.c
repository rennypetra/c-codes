#include<stdio.h>
/*function declaration*/
float simple (float principle,float rate,float time);
/*function definition*/
float simple (float principle,float rate,float time)

{
    float SI;
    SI=(principle*rate*time);
    return SI;
}
int main()
{
    float equity,kcb,barclays,tala;
    /*function call*/
    equity=simple(100000,0.2,2.5);
    kcb=simple(100000,0.075,2.5);
    barclays=simple(100000,0.35,2.5);
    tala=simple(100000,0.90,2.5);
    printf("equity bank:%f\t,kcb :%f\t barclays :%f\t tala:%f",equity,kcb,barclays,tala);
    return 0;
}
