#include<stdio.h>

void append (char *str1,char *str2)
{
    printf("%s",str1);
    printf("%s",str2);

}
int main()
{
    char x[12]={'.','.','.','.','.','.'};
    char y[12]={'.','.','.','.','.','.'};

     printf("enter first word:");
     scanf("%s",&x);
     printf("enter second word:");
     scanf("%s",&y);
     printf("result of append");
     append(x,y);
}
