#include<stdio.h>

int main ()
 {
   char ch = 'A';
   int i = 11;
   float f = 3.14;
   double d = 9.567;
   
   printf("values from variable are :\n");
   printf("%c\n",ch);
   printf("%d\n",i);
   printf("%f\n",f);
   printf("%lf\n",d);
   
   printf("size of each variable\n");
   printf("size of character: %ld\n",sizeof(ch));
   printf("size of  integer : %ld\n",sizeof(i));
   printf("size of float : %ld\n",sizeof(f));
   printf("size of double : %ld\n",sizeof(d));
   
   printf("address of each variable\n");
   printf("address of ch : %p\n",&ch);
   printf("address of i : %p\n",&i);   
   printf("address of f : %p\n",&f);
   printf("address of d : %p\n",&d);
   
   return 0;
 }
