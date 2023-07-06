#include<stdio.h>

void demo()
{
   auto int a= 10;
   a++;
   printf("value from demo is :%d\n",a);
}

void hello()
{
   static int b= 10;
   b++;
   printf("value from hello is :%d\n",b);
}
int main()
{
         demo();
         demo();
         demo();
         hello();
       hello();
       hello();
         return 0;

}
