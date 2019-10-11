#include<stdio.h>
int main()
{
    float maths,eng,kisw,scie,sstcre,sum,average,percentage;
    printf("enter mathematics:\n");
    scanf("%f",&maths);
    printf("enter English:\n");
    scanf("%f",&eng);
    printf ("enter Kiswahili:\n");
    scanf("%f",&kisw);
    printf("enter science:\n");
    scanf("%f",&scie);
    printf("social studies and Christian religious education:\n");
    scanf("%f",&sstcre);
    sum=maths+eng+kisw+scie+sstcre;
    printf("total=%f:\n",sum);
    average=(sum)/5;
    printf("average=%f:\n"),average;
    percentage=(sum)*100/500;
    printf("percentage=%f:\n",percentage);
    return 0;
}
