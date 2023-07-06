#include<stdio.h>
#include<stdlib.h>

struct demo
{
   int i;
   float f;
};

int main()
{
   struct demo obj;
   
   struct demo *ptr = NULL;
   ptr = (struct demo *)malloc(sizeof(struct demo));
   
   obj.i = 11;
   obj.f = 9.0;
   
   ptr->i = 11;
   ptr->f = 9.0;
   
   printf("%d\n",obj.i);
   printf("%d",ptr->i);
   free(ptr);
      
   return 0;
}
