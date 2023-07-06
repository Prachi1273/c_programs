#include<stdio.h>

struct demo
{
   int i;
   float f;
   char ch;
   float d;
};
int main()
{
   struct demo dobj;
   
   printf("size of structure is : %d\n",sizeof(dobj));
   return 0;
}
