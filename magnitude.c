#include<stdio.h>
#include<math.h>
int main()
{
    float X1,Y1,X2,Y2,magnitude,direction;
    printf("enter X1:\n");
    scanf("%f",&X1);
    printf("enter Y1:\n");
    scanf("%f",&Y1);
    printf("enter X2:\n");
    scanf("%f",&X2);
    printf("enter Y2:\n");
    scanf("%f",&Y2);
    magnitude=sqrt((pow((X2-X1),2))+(pow((Y2-Y1),2)));
    direction=atan(Y2-Y1)/(X2-X1);
    printf("magnitude=%f",magnitude);
    printf("direction=%f",direction);
    return 0;

}
