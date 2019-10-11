 #include<stdio.h>
 int sum (int a,int b);
 int difference (int c,int d);
 int multiply (int e, int f);
 float divide (float g,float h);
 int sum (int a, int b)
 {
     int add ;
     add=a+b;
     return add;
 }
 int difference (int c,int d)
 {
     int minus;
     minus=c-d;
     return minus;
 }
 int multiply (int e,int f)
 {
     int multiply;
     multiply=e*f;
     return multiply;
 }
 float divide (float g, float h)
 {
     float divide;
     divide=g/h;
     return divide;
 }

 int main()
 {
      int students[2][2][2]={{2,4},{3,5},{6,8}};
      int i,j,k;
      for (i=0;i<2;i++)
      {
          for (j=0;j>2;j++)
          {for (k=0;k<2;k++);
              printf(" [%d] [%d] [%d] %d:\n",i,j,k); (students[i] [j] [k]);
          }

      }
     int first,second,summation,subtraction,multiplication;
     float division;
     first=8;
     second=30;
     summation=sum(first,second);
     subtraction=difference(first,second);
     multiplication=multiply(first,second);
     division=divide(first,second);
     printf("sum:%d\n difference :%d\n multiply :%d\n divide:%f\n",summation,subtraction,multiplication,division);
     return 0;
 }
