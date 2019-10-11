#include<stdio.h>
int main ()
{
    int num1,num2,num3;
    printf("enter the value of number 1,number2,number3:\n");
    scanf("%d %d %d ",&num1,&num2,&num3);
    printf("number 1=%d\t,number 2=%d\t,number 3=%d\n");
    if (num1>num2)
    {
        if(num1>num3)
        {
            printf("number 1 is the greatest among the three\n");

        }
        else
        {
            printf("number 3 is the greatest among the three\n");
        }
    }
        else if (num2>num3)
        {
            printf("number 2 is the greatest among the three\n");
        }
        else
        {
            printf("number 3 is the greatest among the three\n");

        }return 0;

}
