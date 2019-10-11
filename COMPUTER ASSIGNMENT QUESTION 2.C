#include<stdio.h>
char str1[12],str2[12];
int main()


{


    char str1[12]="hello";
    char str2[12]="world";
    char str3[12];
;    char *result= (str1 + str2);
    strcpy (str3,str1);
    printf("enter first word :%s\n",str3);

    strcpy(str3,str2);
    printf("enter second word :%s\n",str2);

    strcat(str1,str2);
    printf("output :%s\n",str1);

    return result;
}
