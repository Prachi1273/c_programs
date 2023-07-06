#include<stdio.h>

int main ()



{
   int ino = 11;
   
   int *p = &ino;
   
   printf("%d\n", ino);
   printf("%d\n",p);
   printf("%d\n",&ino);
   printf("%d\n",&p);
   printf("%d\n",sizeof(ino));
   printf("%d\n",sizeof(p));
   
   
    
   return 0;
}
