#include<stdio.h>
int main()
{
    /*declare array*/
    int students [2][2]={{5,6},{7,8}};
    int i,j;

    /*display array contents*/
    for (i=0 ;i<2;i++)
    {
      for (j=0;j<2;j++)
    {
        printf("students[%d][%d]=%d\n",i,j,students[i][j]);

    }
    }

    return 0;
}
