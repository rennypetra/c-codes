#include<stdio.h>
int main()
{
    int radius,diameter,circumference,area;
    printf("enter radius:\n");
        scanf("%d",&radius);
        diameter=2*radius;
        circumference=2*3.14*radius;
        area=3.14*radius*radius;
        printf("diameter=%d,circumference=%d,area=%d",diameter,circumference,area);
        return 0;
}
