#include<stdio.h>
/*function declaration*/
float rectangle,circle,triangle;
float area (float length,float width ,float base ,float height,float radius);
/*function definition*/
float area(float length ,float width, float base,float height,float radius)
{
    float AREA;
    AREA,rectangle=(length*width);
    AREA,circle=(3.14*radius*radius);
    AREA,triangle=(0.5*base*height);
    return AREA;
}
int main()
{
    float rectangle,circle,triangle;
    rectangle=102.9;
    circle=3.14*7*7;
    triangle=0.5*5*9;
    printf("area of rectangle:%f\n area of circle:%f\n area of triangle%f",rectangle,circle,triangle);
    return 0;
}
