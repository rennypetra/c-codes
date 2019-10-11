#include<stdio.h>
int main()
{float celcius,farenheight;
printf("enter temperature in celcius:\n");
scanf("%f",&celcius);
farenheight=(celcius*9/5)+32;
printf("%f celcius=%f farenheight",celcius,farenheight);
return 0;
}
