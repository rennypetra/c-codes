#include<stdio.h>
 int main()
 {
     int number ,random;
     char Y[3],N[3];
     printf ("enter random number:");
     scanf("%d",&random);
     for (int number =1;number<=random;number++)
     {
         printf("%d :\n",number);

     }
     printf("would you like to run again?Y/N\n");

     scanf("%c",&Y);
     scanf("%c",&N);
     while (Y)
     {
         printf("enter random number :");
         scanf("%d",&random);
         for (int number=1;number<=random;number++)
         {
             printf("%d:\n",number);
             return 0;


         }

         while(N)
          {

            printf("Exiting");

             return 0;
          }

     }

     return 0;
 }
